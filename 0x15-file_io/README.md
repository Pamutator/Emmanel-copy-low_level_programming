# TASKS 🗂️

## synopsis 📃
This directory contains solutions to all the  tasks that were given for the __(0x15. C - File I/O)__ project from ALX.
Below is all the tasks that were given, you can access their solutions by clicking on their respective header links.

### [0-read\_textfile.c](0-read_textfile.c)
- Write a function that reads a text file and prints it to the POSIX standard output.
- where letters is the number of letters it should read and print
- returns the actual number of letters it could read and print
- if the file can not be opened or read, return 0
- if filename is NULL return 0
- if write fails or does not write the expected amount of bytes, return 0

### [1-create\_file.c](1-create_file.c)
- Create a function that creates a file.
- where filename is the name of the file to create and text\_content is a NULL terminated string to write to the file
- Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
- The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
- if the file already exists, truncate it
- if filename is NULL return -1
- if text\_content is NULL create an empty file

### [2-append\_text\_to\_file.c](2-append_text_to_file.c)
- Write a function that appends text at the end of a file.
- where filename is the name of the file and text\_content is the NULL terminated string to add at the end of the file
- Return: 1 on success and -1 on failure
- Do not create the file if it does not exist
- If filename is NULL return -1
- If text\_content is NULL, do not add anything to the file. 
- Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file

### [3-cp.c](3-cp.c)
- Write a program that copies the content of a file to another file.
- Usage: cp file\_from file\_to
- if the number of argument is not the correct one, exit with code 97 and print Usage: cp file\_from file\_to, followed by a new line, on the POSIX standard error
- if file\_to already exists, truncate it
- if file\_from does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME\_OF\_THE\_FILE, followed by a new line, on the POSIX standard error
- where NAME\_OF\_THE\_FILE is the first argument passed to your program
-if you can not create or if write to file\_to fails, exit with code 99 and print Error: Can't write to NAME\_OF\_THE\_FILE, followed by a new line, on the POSIX standard error
- where NAME\_OF\_THE\_FILE is the second argument passed to your program
- if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD\_VALUE, followed by a new line, on the POSIX standard error
- where FD\_VALUE is the value of the file descriptor
- Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions
- You must read 1,024 bytes at a time from the file\_from to make less system calls. Use a buffer
- You are allowed to use dprintf

### [100-elf\_header.c](100-elf_header.c)
- Write a program that displays the information contained in the ELF header at the start of an ELF file.
- Usage: elf\_header elf\_filename
- Displayed information: (no less, no more, do not include trailing whitespace)
	- Magic
	- Class
	- Data
	- Version
	- OS/ABI
	- ABI Version
	- Type
	- Entry point address
- Format: the same as readelf -h (version 2.26.1)
- If the file is not an ELF file, or on error, exit with status code 98 and display a comprehensive error message to stderr
- You are allowed to use lseek once
- You are allowed to use read a maximum of 2 times at runtime
- You are allowed to have as many functions as you want in your source file
- You are allowed to use printf
