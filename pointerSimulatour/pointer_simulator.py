import tkinter as tk
from tkinter import ttk
import random
import uuid

class EnhancedPointerVisualizer:
    def __init__(self, root):
        self.root = root
        self.root.title("Advanced Pointer Visualizer")
        
        # Configure main layout
        self.main_frame = ttk.Frame(root)
        self.main_frame.pack(fill=tk.BOTH, expand=True)
        
        # Canvas for visualization
        self.canvas = tk.Canvas(self.main_frame, width=800, height=600, bg='white')
        self.canvas.pack(side=tk.LEFT, fill=tk.BOTH, expand=True)
        
        # Control panel
        self.control_panel = ttk.Frame(self.main_frame, width=200)
        self.control_panel.pack(side=tk.RIGHT, fill=tk.Y, padx=5, pady=5)
        
        # Initialize state
        self.variables = {}
        self.pointers = {}
        self.current_drag = None
        self.selected_var = None
        self.creating_pointer = False
        self.simulated_addresses = {}
        
        # Setup UI components
        self.setup_controls()
        self.setup_memory_panel()
        self.setup_status_bar()
        
        # Event bindings
        self.canvas.bind("<Button-1>", self.on_click)
        self.canvas.bind("<B1-Motion>", self.on_drag)
        self.canvas.bind("<ButtonRelease-1>", self.on_release)
        self.canvas.bind("<Double-Button-1>", self.on_double_click)

    def setup_controls(self):
        control_frame = ttk.LabelFrame(self.control_panel, text="Controls")
        control_frame.pack(pady=5, fill=tk.X)
        
        ttk.Button(control_frame, text="Create Variable", 
                 command=self.create_variable).pack(fill=tk.X, pady=2)
        ttk.Button(control_frame, text="Create Pointer", 
                 command=self.start_pointer_creation).pack(fill=tk.X, pady=2)
        ttk.Button(control_frame, text="Randomize Values", 
                 command=self.randomize_values).pack(fill=tk.X, pady=2)
        ttk.Button(control_frame, text="Clear All", 
                 command=self.clear_canvas).pack(fill=tk.X, pady=2)
        
        # Pointer type selector
        self.pointer_type = tk.StringVar(value="single")
        ttk.Label(control_frame, text="Pointer Type:").pack(anchor=tk.W)
        ttk.Radiobutton(control_frame, text="Single", variable=self.pointer_type,
                      value="single").pack(anchor=tk.W)
        ttk.Radiobutton(control_frame, text="Double", variable=self.pointer_type,
                      value="double").pack(anchor=tk.W)
        ttk.Radiobutton(control_frame, text="Null", variable=self.pointer_type,
                      value="null").pack(anchor=tk.W)
        
        # Memory operations
        mem_frame = ttk.LabelFrame(self.control_panel, text="Memory Operations")
        mem_frame.pack(pady=5, fill=tk.X)
        ttk.Button(mem_frame, text="Dereference Pointer", 
                 command=self.dereference_pointer).pack(fill=tk.X, pady=2)
        ttk.Button(mem_frame, text="Show Memory Map", 
                 command=self.show_memory_map).pack(fill=tk.X, pady=2)

    def setup_memory_panel(self):
        self.memory_panel = ttk.LabelFrame(self.control_panel, text="Memory Dump")
        self.memory_panel.pack(pady=5, fill=tk.BOTH, expand=True)
        
        self.memory_tree = ttk.Treeview(self.memory_panel, columns=("Address", "Value"), 
                                      show="headings", height=15)
        self.memory_tree.heading("Address", text="Address")
        self.memory_tree.heading("Value", text="Value")
        self.memory_tree.column("Address", width=80)
        self.memory_tree.column("Value", width=80)
        self.memory_tree.pack(fill=tk.BOTH, expand=True)

    def setup_status_bar(self):
        self.status_bar = ttk.Label(self.main_frame, text="Ready", 
                                  relief=tk.SUNKEN, anchor=tk.W)
        self.status_bar.pack(side=tk.BOTTOM, fill=tk.X)

    def update_status(self, message):
        self.status_bar.config(text=message)
        self.root.update_idletasks()

    def create_variable(self, value=None):
        var_id = f"var{len(self.variables)+1}"
        addr = self.generate_simulated_address()
        x = random.randint(100, 700)
        y = random.randint(100, 500)
        value = value if value is not None else random.randint(1, 100)
        
        # Draw variable box with centered text
        box = self.canvas.create_rectangle(x-50, y-30, x+50, y+30, 
                                         fill='#e1f5fe', outline='#01579b', 
                                         width=2, tags=("variable", var_id))
        text = self.canvas.create_text(
            x, y, 
            text=f"{var_id}\nAddr: {addr}\nValue: {value}", 
            font=('Consolas', 9), 
            tags=("variable", var_id),
            justify='center',
            anchor='center'
        )
        
        self.variables[var_id] = {
            'id': var_id,
            'addr': addr,
            'value': value,
            'box': box,
            'text': text,
            'x': x,
            'y': y,
            'pointers': []
        }
        self.simulated_addresses[addr] = var_id
        self.update_memory_panel()
        self.update_status(f"Created variable {var_id} at {addr}")

    def generate_simulated_address(self):
        return f"0x{uuid.uuid4().fields[-1]:08x}"

    def start_pointer_creation(self):
        self.creating_pointer = True
        self.selected_var = None
        self.canvas.config(cursor="crosshair")
        self.update_status("Select source variable for pointer")

    def create_pointer(self, source_var, target_var):
        if source_var == target_var:
            self.update_status("Error: Cannot create pointer to self")
            return
        
        pointer_id = f"ptr{len(self.pointers)+1}"
        ptr_type = self.pointer_type.get()
        
        # Handle null pointer
        if ptr_type == "null":
            target_var = None
            start_x = self.variables[source_var]['x']
            start_y = self.variables[source_var]['y']
            end_x = start_x + 50
            end_y = start_y - 50
            color = "#757575"
        else:
            start_x = self.variables[source_var]['x']
            start_y = self.variables[source_var]['y']
            end_x = self.variables[target_var]['x']
            end_y = self.variables[target_var]['y']
            color = "#d32f2f" if ptr_type == "single" else "#6a1b9a"
        
        # Create arrow
        arrow = self.canvas.create_line(start_x, start_y, end_x, end_y,
                                      arrow=tk.LAST, fill=color, width=2,
                                      tags=("pointer", pointer_id))
        
        self.pointers[pointer_id] = {
            'id': pointer_id,
            'source': source_var,
            'target': target_var,
            'type': ptr_type,
            'arrow': arrow
        }
        self.variables[source_var]['pointers'].append(pointer_id)
        self.update_memory_panel()
        self.update_status(f"Created {ptr_type} pointer {pointer_id}")

    def on_click(self, event):
        items = self.canvas.find_withtag("current")
        if not items:
            return

        tags = self.canvas.gettags(items[0])
        if "variable" in tags:
            var_id = tags[1]
            if self.creating_pointer:
                if not self.selected_var:
                    self.selected_var = var_id
                    self.highlight_variable(var_id)
                    self.update_status(f"Selected source: {var_id} - Now select target")
                else:
                    self.create_pointer(self.selected_var, var_id)
                    self.unhighlight_variable(self.selected_var)
                    self.selected_var = None
                    self.creating_pointer = False
                    self.canvas.config(cursor="")
            else:
                self.current_drag = var_id
        elif "pointer" in tags:
            self.selected_var = tags[1]
            self.update_status(f"Selected pointer: {self.selected_var}")

    def on_drag(self, event):
        if self.current_drag:
            var = self.variables[self.current_drag]
            dx = event.x - var['x']
            dy = event.y - var['y']
            
            self.canvas.move(self.current_drag, dx, dy)
            var['x'] = event.x
            var['y'] = event.y
            self.update_pointers(self.current_drag)

    def update_pointers(self, var_id):
        for ptr_id, ptr in self.pointers.items():
            if ptr['source'] == var_id or ptr['target'] == var_id:
                if ptr['type'] == "null":
                    start_x = self.variables[ptr['source']]['x']
                    start_y = self.variables[ptr['source']]['y']
                    end_x = start_x + 50
                    end_y = start_y - 50
                else:
                    start_x = self.variables[ptr['source']]['x']
                    start_y = self.variables[ptr['source']]['y']
                    end_x = self.variables[ptr['target']]['x']
                    end_y = self.variables[ptr['target']]['y']
                
                self.canvas.coords(ptr['arrow'], start_x, start_y, end_x, end_y)

    def on_release(self, event):
        self.current_drag = None

    def on_double_click(self, event):
        items = self.canvas.find_withtag("current")
        if items:
            tags = self.canvas.gettags(items[0])
            if "pointer" in tags:
                self.selected_var = tags[1]
                self.update_status(f"Selected pointer: {self.selected_var}")

    def randomize_values(self):
        for var_id, var_data in self.variables.items():
            new_value = random.randint(1, 100)
            var_data['value'] = new_value
            self.canvas.itemconfig(var_data['text'], 
                                 text=f"{var_id}\nAddr: {var_data['addr']}\nValue: {new_value}")
        self.update_memory_panel()
        self.update_status("Randomized all variable values")

    def dereference_pointer(self):
        if self.selected_var and self.selected_var in self.pointers:
            ptr = self.pointers[self.selected_var]
            if ptr['type'] == "null":
                self.update_status("Error: Dereferencing null pointer!")
                self.canvas.itemconfig(ptr['arrow'], fill="#ff0000")
                self.root.after(1000, lambda: self.canvas.itemconfig(ptr['arrow'], fill="#757575"))
                return
            
            if ptr['target'] and ptr['target'] in self.variables:
                target = self.variables[ptr['target']]
                self.update_status(f"Dereferenced {ptr['id']} → {target['addr']} (Value: {target['value']})")
                self.highlight_variable(ptr['target'])
                self.root.after(1000, lambda: self.unhighlight_variable(ptr['target']))
            else:
                self.update_status("Error: Invalid pointer target!")

    def show_memory_map(self):
        map_window = tk.Toplevel(self.root)
        map_window.title("Memory Map")
        
        text = tk.Text(map_window, width=40, height=20, font=('Consolas', 10))
        text.pack(padx=10, pady=10)
        
        text.insert(tk.END, "Memory Address\tVariable\tValue\n")
        text.insert(tk.END, "-"*40 + "\n")
        for addr, var_id in sorted(self.simulated_addresses.items()):
            if var_id in self.variables:
                var = self.variables[var_id]
                text.insert(tk.END, f"{addr}\t{var_id}\t{var['value']}\n")
        
        text.config(state=tk.DISABLED)

    def update_memory_panel(self):
        self.memory_tree.delete(*self.memory_tree.get_children())
        for var_id, var in self.variables.items():
            self.memory_tree.insert("", tk.END, values=(var['addr'], var['value']))
        for ptr_id, ptr in self.pointers.items():
            if ptr['target']:
                self.memory_tree.insert("", tk.END, values=(
                    f"→ {ptr_id}",
                    self.variables[ptr['target']]['addr']
                ))

    def clear_canvas(self):
        self.canvas.delete("all")
        self.variables = {}
        self.pointers = {}
        self.simulated_addresses = {}
        self.update_memory_panel()
        self.update_status("Canvas cleared")

    def highlight_variable(self, var_id):
        self.canvas.itemconfig(self.variables[var_id]['box'], outline='#f44336', width=3)

    def unhighlight_variable(self, var_id):
        self.canvas.itemconfig(self.variables[var_id]['box'], outline='#01579b', width=2)

if __name__ == "__main__":
    root = tk.Tk()
    app = EnhancedPointerVisualizer(root)
    root.mainloop()