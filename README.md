# 🧪 Operating Systems Lab – Open Source Repository

Welcome to the **Operating Systems Lab** open-source repository!  
This project contains clean, beginner-friendly C implementations of core OS concepts taught in university labs such as VTU, Anna University, and others.

> ✨ Made by students, for students. Learn by doing, and contribute as you grow.

---

## 📚 Contents

| Category              | Folder              | Algorithms / Programs Included                                  |
|-----------------------|---------------------|------------------------------------------------------------------|
| CPU Scheduling        | `scheduling/`       | FCFS, SJF, Round Robin, Priority                                 |
| Memory Management     | `memory_management/`| First Fit, Best Fit, Worst Fit                                   |
| Page Replacement      | `page_replacement/` | FIFO, LRU                                                        |
| Deadlock Avoidance    | `deadlock/`         | Banker's Algorithm                                               |
| Interprocess Comm.    | `ipc/`              | Producer-Consumer, Reader-Writer                                 |


---

## 🛠️ How to Run

Each program is written in **C** and can be compiled using `gcc`:

```bash

gcc filename.c -o outputname
./outputname
```

Some programs use **pthreads**:
```bash
gcc thread_based_file.c -lpthread -o program
```

---

## 💻 Example Projects

- ✅ `scheduling/fcfs/fcfs.c`: First Come First Serve CPU scheduling
- ✅ `ipc/producer_consumer.c`: Synchronization using semaphores
- ✅ `deadlock/bankers_algorithm.c`: Avoid deadlocks using Banker's safety algorithm


---

## 📚 Recommended Learning Resources

- [GeeksForGeeks – OS Concepts](https://www.geeksforgeeks.org/operating-systems/)
- [Little OS Book (Free)](https://littleosbook.github.io/)
- [Operating System Concepts – Silberschatz et al.](https://os-book.com/)

---

## 🧑‍💻 Contributing

Want to improve this repo?

1. 🍴 Fork this repo
2. 📥 Clone your fork
3. 🛠️ Make your changes
4. 📤 Submit a Pull Request

Contributions include:
- New algorithms
- Translations into Rust
- 


---

## 📝 License

This project is released under the **MIT License** – free to use, modify, and contribute.

---

## 🙌 Credits

Thanks to all contributors, batchmates, and the open-source OS community! 💙
