#0x15. C - File I/O

## General:
- Look for the right source of information online
- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
- How to use the I/O system calls open, close, read and write
- What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
- What are file permissions, and how to set them when creating a file with the open system call
- What is a system call
- What is the difference between a function and a system call

#### Functions:

### 0. `ssize_t read_textfile(const char *filename, size_t letters);`
Write a function that reads a text file and prints it to the POSIX standard output.

####

### 1. `int create_file(const char *filename, char *text_content);`
Create a function that creates a file.

####

### 2. `int append_text_to_file(const char *filename, char *text_content);`
Write a function that appends text at the end of a file.

####

### 3. `Write a program that copies the content of a file to another file.`
- Usage: `cp file_from file_to`
