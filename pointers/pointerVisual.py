import tkinter as tk
import random
import time

def update_pointer():
    global var_value, memory_slots, pointer_arrow
    var_value = random.randint(1, 100)
    ptr_label["text"] = f"Pointer Address: {id(var_value)}"
    value_label["text"] = f"Value: {var_value}"
    
    # Update memory slot
    slot_index = random.randint(0, len(memory_slots) - 1)
    memory_slots[slot_index] = var_value
    
    # Redraw UI
    draw_memory()
    animate_pointer(slot_index)

def draw_memory():
    canvas.delete("all")
    
    for i in range(len(memory_slots)):
        x1, y1, x2, y2 = 120, 50 + i * 60, 220, 100 + i * 60
        color = "#ADD8E6" if memory_slots[i] is not None else "#D3D3D3"
        canvas.create_rectangle(x1, y1, x2, y2, fill=color, outline="black", width=2)
        canvas.create_text(80, y1 + 25, text=f"Memory[{i}]", font=("Arial", 10, "bold"))
        canvas.create_text(170, y1 + 25, text=str(memory_slots[i] if memory_slots[i] else ""), font=("Arial", 14, "bold"))

def animate_pointer(target_index):
    global pointer_arrow
    target_y = 50 + target_index * 60 + 25
    
    # Smooth animation
    if pointer_arrow:
        current_y = canvas.coords(pointer_arrow)[1]
        step = 3 if current_y < target_y else -3
        while abs(current_y - target_y) > 3:
            current_y += step
            canvas.delete("pointer")
            pointer_arrow = canvas.create_text(50, current_y, text="→", font=("Arial", 20, "bold"), fill="red", tags="pointer")
            canvas.update()
            time.sleep(0.02)
    
    canvas.delete("pointer")
    pointer_arrow = canvas.create_text(50, target_y, text="→", font=("Arial", 20, "bold"), fill="red", tags="pointer")

def create_ui():
    global ptr_label, value_label, canvas, memory_slots, pointer_arrow
    
    root = tk.Tk()
    root.title("Pointer Visualization")
    root.geometry("350x400")
    
    tk.Label(root, text="Pointer and Memory Representation", font=("Arial", 12, "bold")).pack(pady=5)
    
    ptr_label = tk.Label(root, text="Pointer Address: ", font=("Arial", 10))
    ptr_label.pack(pady=5)
    
    value_label = tk.Label(root, text="Value: ", font=("Arial", 10))
    value_label.pack(pady=5)
    
    canvas = tk.Canvas(root, width=350, height=250, bg="white")
    canvas.pack()
    
    update_button = tk.Button(root, text="Change Value", command=update_pointer)
    update_button.pack(pady=10)
    
    memory_slots = [None] * 3  # Simulating three memory locations
    pointer_arrow = None
    draw_memory()
    update_pointer()
    
    root.mainloop()

if __name__ == "__main__":
    var_value = None
    create_ui()
