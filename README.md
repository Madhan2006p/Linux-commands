# Linux-Commands (C Implementations) (Windows / Linux)

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

# Example: compile pwd
gcc pwd.c -o pwd

# Run the command
./pwd


# 🛠️ Roadmap to Re-creating Linux Commands

---

## 📌 Phase 1: Foundation (Basics of File I/O & Directories)

**Goal:** Learn how Linux represents files & directories.
**Commands to re-create:**

1. `echo` → Print text to stdout (`printf`, `write`)
2. `cat` → Read a file and print its contents (`open`, `read`, `write`)
3. `ls` → List directory entries (`opendir`, `readdir`)
4. `pwd` → Print current working directory (`getcwd`)

🔑 **Concepts Learned:**

* File descriptors, system calls
* Buffering & standard streams (stdin, stdout, stderr)
* Directory navigation

---

## 📌 Phase 2: File Manipulation

**Goal:** Work with file operations & metadata.
**Commands to re-create:**

1. `cp` → Copy files (`read` + `write` loop)
2. `mv` → Move files (`rename`, or copy + delete)
3. `rm` → Delete files (`unlink`)
4. `touch` → Create empty file / update timestamp (`open` with `O_CREAT`)

🔑 **Concepts Learned:**

* System calls (`open`, `creat`, `unlink`, `rename`)
* File modes & permissions
* Timestamps (`utime`)

---

## 📌 Phase 3: Permissions & Attributes

**Goal:** Explore file metadata, users, groups.
**Commands to re-create:**

1. `chmod` → Change file permissions (`chmod`)
2. `chown` → Change ownership (`chown`)
3. `stat` → Show file metadata (`stat`, `lstat`)

🔑 **Concepts Learned:**

* File permission bits (rwx)
* UID/GID and ownership
* File types (regular, dir, symlink)

---

## 📌 Phase 4: Process & System Commands

**Goal:** Understand how Linux manages processes.
**Commands to re-create:**

1. `ps` → List running processes (parse `/proc/`)
2. `kill` → Send signals (`kill(pid, SIGKILL)`)
3. `sleep` → Pause (`sleep`, `nanosleep`)
4. `whoami` → Get current user (`getuid`, `getpwuid`)

🔑 **Concepts Learned:**

* `/proc` filesystem
* Process IDs & signals
* User identity

---

## 📌 Phase 5: Text Processing Utilities

**Goal:** Work with string parsing & searching.
**Commands to re-create:**

1. `grep` → Search patterns in files (basic regex)
2. `wc` → Count lines, words, characters
3. `head` / `tail` → Show first/last N lines
4. `sort` → Sort lines in a file

🔑 **Concepts Learned:**

* String processing
* Regular expressions
* Memory efficiency with streams

---

## 📌 Phase 6: Advanced Utilities

**Goal:** Combine system concepts into powerful tools.
**Commands to re-create:**

1. `find` → Recursively search files (`nftw`, recursion)
2. `df` → Show disk usage (`statvfs`)
3. `du` → Disk usage per file (`stat`, recursion)
4. `tar` → Archive files (optional, for advanced challenge)

🔑 **Concepts Learned:**

* Recursion in filesystem traversal
* Filesystem statistics
* Compression & archiving concepts

---

## 📌 Phase 7: Shell-like Features (Bonus)

**Goal:** Move towards a *mini-shell environment*.
**Ideas:**

* Build a very basic **shell** (`read`, `fork`, `exec`, `wait`)
* Add support for simple pipelines (`|`)
* Implement background processes (`&`)


---


