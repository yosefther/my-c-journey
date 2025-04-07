# C Learning Roadmap

## 🚀 Phase 1: Basics of C (1-2 Weeks)
### 🔹 Setup & Fundamentals
- [x] Install **MinGW/MSVC**
- [x] Learn **Compiling & Linking** (`gcc myfile.c -o myfile`)
- [x] Understand **Data Types, Operators, Control Flow (if, loops, switch)**

### 📌 Projects:
- [x] Create a simple **CLI calculator**
- [x] Write a program to **reverse a string**

---

## 🔗 Phase 2: Pointers & Memory Management (2-3 Weeks)
### 🔹 Master Pointers (Crucial for Exploits & Shellcoding)
- [ ] Understand Pointers (`*`, `&`, `->`), Pointer Arithmetic
- [ ] Work with Pointers & Arrays, Strings (`char *str`)
- [ ] Use Function Pointers (`void (*fptr)()`) 

### 🔹 Memory Management & Buffer Overflows
- [ ] Learn `malloc`, `calloc`, `free`, `realloc`
- [ ] Understand Stack vs Heap
- [ ] Explore Buffer Overflow Basics

### 📌 Projects:
- [ ] Implement a **custom strcpy()** function
- [ ] Write a program that **dynamically allocates memory for an array**
- [ ] Create a **stack-based buffer overflow** (safe environment)

---

## 💻 Phase 3: File Handling & System Calls (2-3 Weeks)
### 🔹 Master File I/O & System Interaction
- [ ] Learn `fopen`, `fwrite`, `fread`, `fclose`
- [ ] Use `stat`, `rename`, `remove`, `chmod`
- [ ] Work with Directories (`opendir`, `readdir`, `closedir`)

### 📌 Projects:
- [ ] Create a **basic file encryption tool** using XOR

---

## 🌐 Phase 4: Network Programming (3-4 Weeks)
### 🔹 Master Sockets & Communication
- [ ] Work with `socket()`, `connect()`, `bind()`, `listen()`, `accept()`
- [ ] Learn `recv()`, `send()`, `select()`, `poll()`
- [ ] Implement **TCP, UDP, and raw sockets**

### 📌 Projects:
- [ ] Build a **simple chat server** (TCP)
- [ ] Implement a **basic packet sniffer** using raw sockets

---

## 🔬 Phase 5: OS Internals & Advanced C (4-5 Weeks)
### 🔹 Interacting with OS (Windows/Linux)
- [ ] Learn about **Processes & Threads** (`fork`, `exec`, `CreateProcess`, `OpenProcess`)
- [ ] Understand **Inter-Process Communication (IPC)** (pipes, shared memory)
- [ ] Explore **Dynamic Link Libraries (DLLs) & Shared Objects (SO)**
---

## 🔍 Phase 6: Reverse Engineering & Exploit Development (Ongoing)
### 🔹 Understanding Binary Exploits
- [ ] Learn Buffer Overflows (stack, heap)
- [ ] Study Format String Vulnerabilities
- [ ] Explore Return-Oriented Programming (ROP)

### 📌 Projects:
- [ ] Modify a compiled C program with a **hex editor**
