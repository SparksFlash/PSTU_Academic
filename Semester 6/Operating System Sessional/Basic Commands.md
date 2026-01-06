# ফাইল সম্পর্কিত কমান্ড — Linux ও Windows (Basic → Advanced)

এখানে ফাইল-সংক্রান্ত কমান্ডগুলোর সুন্দরভাবে সংগঠিত ও ব্যবহারযোগ্য তালিকা দেয়া হলো — Linux (bash) ও Windows (CMD/PowerShell) উভয়ের জন্য। শেষে `C` ও `ASM` ফাইল কিভাবে কম্পাইল/লিংক/রান করবে তা উদাহরণসহ আছে।

---

## সূচিপত্র
- Linux: Basic
- Linux: Intermediate
- Linux: Advanced / Utilities
- Windows CMD: Basic
- PowerShell: Useful Commands
- File checksums, archive ও compression
- C ফাইল কম্পাইল ও রান (Linux ও Windows)
- ASM (NASM / MASM) কম্পাইল ও রান উদাহরণ

---

## **Linux — Basic file commands**
- **List files:** lists files and directories.

	```bash
	ls -lah        # human-readable sizes, hidden files
	ls --color=auto
	```
- **Current dir:** show current working directory.

	```bash
	pwd
	```
- **Change dir:**

	```bash
	cd /path/to/dir
	cd -           # previous
	cd ~           # home
	```
- **Create/inspect files:**

	```bash
	touch file.txt
	cat file.txt
	less file.txt
	head -n 20 file.txt
	tail -n 100 file.txt
	```
- **Copy / Move / Remove:**

	```bash
	cp src dest            # copy file
	cp -r dir1 dir2        # copy directory
	mv oldname newname     # move/rename
	rm file.txt            # remove file
	rm -rf dir             # dangerous: recursive force
	```
- **Make / remove directory:**

	```bash
	mkdir -p a/b/c
	rmdir emptydir
	```
- **Permissions & ownership:**

	```bash
	chmod 644 file.txt     # rw-r--r--
	chmod +x script.sh
	chown user:group file
	```

## **Linux — Intermediate**
- **Find files:**

	```bash
	find /path -name "*.c"            # search by name
	find . -type f -mtime -7          # modified in last 7 days
	```
- **Locate (fast):**

	```bash
	sudo updatedb
	locate myfile.txt
	```
- **Search inside files:**

	```bash
	grep -RIn "TODO" .                # recursive, show line numbers
	grep -n "pattern" file.txt
	```
- **View file type / metadata:**

	```bash
	file binary_or_text                # determine file type
	stat file.txt                      # detailed timestamps
	ls -l --time-style=long-iso file
	```
- **Links:**

	```bash
	ln target hardlink                 # hard link
	ln -s /path/to/target symlink      # symbolic link
	```

## **Linux — Advanced / Utilities**
- **Archive & compress:**

	```bash
	tar -czvf archive.tar.gz dir/      # gzip tarball
	tar -xzf archive.tar.gz            # extract
	gzip file                          # compress -> file.gz
	gunzip file.gz
	bzip2 / xz similarly
	```
- **Split / join:**

	```bash
	split -b 10M large.bin part_       # split into 10MB chunks
	cat part_* > large.bin             # join
	```
- **Checksums / verify:**

	```bash
	md5sum file
	sha256sum file
	```
- **Compare files / diffs:**

	```bash
	diff -u file1 file2                 # unified diff
	cmp file1 file2                     # binary compare
	```
- **Permissions ACL / attributes:**

	```bash
	getfacl file
	setfacl -m u:alice:rwx file
	lsattr file                         # ext filesystem attributes
	chattr +i file                      # make immutable
	```
- **Open files held by processes:**

	```bash
	lsof | grep filename
	fuser -v file
	```

## **Windows — CMD (basic equivalents)**
- **List files:**

	```cmd
	dir /a /-c
	```
- **Current / change dir:**

	```cmd
	cd          # show
	cd \path\to\dir
	```
- **Create / view files:**

	```cmd
	type file.txt
	more file.txt
	copy con file.txt   # create interactively (Ctrl+Z to save)
	```
- **Copy / Move / Delete:**

	```cmd
	copy src dest
	move src dest
	del file.txt
	rmdir /S /Q dir
	```
- **Permissions / attributes:**

	```cmd
	attrib +r file.txt       # read-only
	icacls file.txt /grant UserName:(R,W)
	takeown /f file.txt
	```
- **Search / find in files:**

	```cmd
	findstr /S /N "pattern" *             # recursive search
	```
- **Checksum (built-in):**

	```cmd
	certutil -hashfile file SHA256
	```

## **PowerShell — useful file commands (modern)**
- **Listing & details:**

	```powershell
	Get-ChildItem -Path . -Recurse -File
	ls | Format-Table Name,Length,Mode
	```
- **Read / stream file:**

	```powershell
	Get-Content file.txt -Tail 50 -Wait    # like tail -f
	```
- **Copy / Move / Remove:**

	```powershell
	Copy-Item -Path src -Destination dest -Recurse
	Move-Item src dest
	Remove-Item -Path path -Recurse -Force
	```
- **Compress / Expand:**

	```powershell
	Compress-Archive -Path folder -DestinationPath archive.zip
	Expand-Archive -Path archive.zip -DestinationPath outdir
	```
- **Robust file copy:**

	```powershell
	robocopy C:\src C:\dst /MIR /NP /R:3
	```
- **Create symbolic link:**

	```powershell
	New-Item -ItemType SymbolicLink -Path link -Target target
	# or in CMD: mklink /D link target
	```

## **Universal: Archive & checksum tools**
- **tar** (now available on modern Windows too):

	```bash
	tar -czf files.tar.gz folder
	tar -xzf files.tar.gz
	```
- **zip / unzip / 7z**

	```bash
	zip -r archive.zip folder
	unzip archive.zip
	7z a archive.7z folder
	7z x archive.7z
	```

## **C ফাইল — Command-line compile & run**

### Linux (gcc / clang)

```bash
# Simple compile and run
gcc -Wall -Wextra -O2 -o hello hello.c
./hello

# With debugging symbols
gcc -g -O0 -o hello_dbg hello.c
gdb ./hello_dbg

# Produce object then link
gcc -c hello.c -o hello.o
gcc hello.o -o hello
```

টিপস:
- `-Wall -Wextra` ব্যবহার করে ওয়ার্নিং দেখুন।
- `-O2` বা `-O3` অপটিমাইজেশনের জন্য, `-g` ডিবাগিং ক্ষমতার জন্য।

### Windows — MinGW-w64 (gcc)

```powershell
gcc -Wall -o hello.exe hello.c
.\hello.exe
```

### Windows — MSVC (Developer Command Prompt)

```cmd
cl /W3 /EHsc hello.c    # produces hello.exe
.\hello.exe
```

### Makefile (ছোট উদাহরণ)

```makefile
CC=gcc
CFLAGS=-Wall -g
all: hello

hello: hello.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f hello
```

## **ASM (Assembly) — NASM (Linux) — x86_64 example**

নিচে একটি ছোট NASM প্রোগ্রাম আছে যা Linux x86_64-এ `write` সিস্টেমকল ব্যবহার করে "Hello" প্রিন্ট করে।

`hello.asm`:

```asm
; hello.asm - x86_64 Linux
section .data
		msg db "Hello from ASM", 10
		len equ $ - msg

section .text
		global _start

_start:
		mov rax, 1          ; sys_write
		mov rdi, 1          ; stdout
		mov rsi, msg        ; message
		mov rdx, len        ; length
		syscall

		mov rax, 60         ; sys_exit
		xor rdi, rdi
		syscall
```

কম্পাইল ও লিংক (Linux):

```bash
nasm -f elf64 hello.asm -o hello.o
ld hello.o -o hello
./hello
```

অবশ্য `gcc` দ্বারা লিংক করতে চাইলে:

```bash
nasm -f elf64 hello.asm -o hello.o
gcc hello.o -o hello_c_linked    # links with C runtime if needed
./hello_c_linked
```

## **ASM on Windows — NASM + MinGW (win64)**

উদাহরণ (win64) — সরলতর কাজের জন্য NASM দিয়ে `.o` বানিয়ে `gcc` দিয়ে লিংক করা সবচেয়ে সহজ:

```powershell
nasm -f win64 hello.asm -o hello.o
gcc hello.o -o hello.exe
.\hello.exe
```

Windows-এ MASM (Microsoft Macro Assembler) ব্যবহার করার ক্ষেত্রে Visual Studio Developer Command Prompt থেকে:

```cmd
; assemble with ml (MASM)
ml /c /coff hello.asm    ; produces hello.obj
link /SUBSYSTEM:CONSOLE hello.obj
hello.exe
```

নোট: MASM সিনট্যাক্স NASM থেকে আলাদা; Windows API কল বা C-runtime ব্যবহার করার জন্য স্ট্যাক ও কল কনভেনশন মেনে কোড করতে হবে।

## দ্রুত রেফারেন্স (শর্টকার্টস)
- Linux: `ls`, `cp`, `mv`, `rm`, `find`, `grep`, `tar`, `gzip`, `md5sum`, `sha256sum`
- Windows CMD: `dir`, `copy`, `move`, `del`, `type`, `findstr`, `certutil`
- PowerShell: `Get-ChildItem`, `Get-Content`, `Copy-Item`, `Compress-Archive`

---

যদি চান, আমি এই ফাইলে আরেকটা অংশ যোগ করে Visual Studio/MSVC-র বিস্তারিত MASM উদাহরণ দিয়ে দেব, কিংবা 32-bit (i386 / win32) ASM কিভাবে চালাবেন তা যোগ করব। কি চান যোগ করি?

