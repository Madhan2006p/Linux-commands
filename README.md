# Linux-Commands (C Implementations)

This project is a **re-creation of basic Linux commands using C programming**.  
The aim is to understand how fundamental Unix/Linux utilities work internally by writing simplified versions of them from scratch.

---

## 📌 Aim
- To learn system-level programming in C.
- To explore how Linux commands interact with the OS.
- To practice file handling, process management, and directory operations.
- To build a mini-toolbox of commonly used commands.

---

## 🛠️ Implemented Commands
| Command | Description | File |
|---------|-------------|------|
| `pwd`   | Print working directory | `pwd.c` |
| `ls`    | List files and directories | `ls.c` |
| `mkdir` | Create directories | `mkdir.c` |
| `rmdir` | Remove directories | `rmdir.c` |
| `cp`    | Copy files | `cp.c` |
| `mv`    | Move/rename files | `mv.c` |
| `rm`    | Remove files | `rm.c` |
| `cat`   | Display file contents | `cat.c` |
| `head`  | Show first few lines of a file | `head.c` |
| `tail`  | Show last few lines of a file | `tail.c` |
| `echo`  | Print arguments to standard output | `echo.c` |
| `grep`  | Search text in files | `grep.c` |

---

## ⚙️ Compilation & Usage
Each command is implemented as a separate C file.  
Compile using `gcc`:

```bash
# Example: compile pwd
gcc pwd.c -o pwd

# Run the command
./pwd
