# File I/O in C :file_folder:

## Tests Folder
- [Tests](./tests): This folder contains test files.

## Main.h
- [Main.h](./main.h): This directory contains all the function prototypes.

| File                      | Prototype                                                            |
| ------------------------- | -------------------------------------------------------------------- |
| `0-read_textfile.c`       | `ssize_t read_textfile(const char *filename, size_t letters);`       |
| `1-create_file.c`         | `int create_file(const char *filename, char *text_content);`         |
| `2-append_text_to_file.c` | `int append_text_to_file(const char *filename, char *text_content);` |

## Tasks :page_with_curl:

### Task 0: Tread Lightly, She Is Near
- [0-read_textfile.c](./0-read_textfile.c): This C function reads a text file and prints it to the `POSIX` standard output.
- The parameter `letters` specifies the number of letters the function should read and print.
- Returns `0` if the file is `NULL`, cannot be opened, or cannot be read.
- Returns the actual number of bytes read and printed if successful.

### Task 1: Under the Snow
- [1-create_file.c](./1-create_file.c): This C function creates a file.
- The parameter `filename` is the name of the file to create.
- The parameter `text_content` is a null-terminated string to write to the file.
- If `text_content` is `NULL`, the function creates an empty file.
- The created file has the permissions `rw-------`.
- Returns `-1` if `filename` is `NULL` or the function fails.
- Returns `1` on success.

### Task 2: Speak Gently, She Can Hear
- [2-append_text_to_file.c](./2-append_text_to_file.c): This C function appends text to the end of a file.
- The parameter `filename` is the name of the file.
- The parameter `text_content` is a null-terminated string to append to the file.
- The function does not create the file if it does not exist.
- Returns `-1` if `text_content` is `NULL`, `filename` is `NULL`, the function fails, or the user lacks write permissions on the file.
- Returns `1` on success.

### Task 3: cp
- [3-cp.c](./3-cp.c): This C program copies the contents of one file to another.
- Usage: `cp file_from file_to`
- If `file_to` already exists, it is truncated.
- The created file has the permissions `rw-rw-r--`.
- Handles various error cases and exits with appropriate error messages and codes.

### Task 4: elf
- [100-elf_header.c](./100-elf_header.c): This C program displays information from the `ELF` header of an `ELF` file.
- Usage: `elf_header elf_filename`
- Displays various fields from the `ELF` header.
- Handles errors and exits with appropriate messages and codes.
