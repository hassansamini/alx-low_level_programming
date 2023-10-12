# Shell Project Requirements

## General
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file at the root of the project folder is mandatory
- Code should follow the Betty style, which will be checked using betty-style.pl and betty-doc.pl
- Ensure no memory leaks in your shell
- Limit the number of functions per file to 5 or fewer
- Use include guards for all header files
- Use system calls only when necessary

## Documentation
- Write a README with a description of your project
- Include an AUTHORS file at the root of your repository, listing all contributors
- Use a single project repository for each group; collaborating with your partner to avoid duplicate repositories

## GitHub
- Add your partner as a collaborator to the repository to avoid duplicate repositories

## Output
- Your program must have the exact same output as sh (/bin/sh) and the exact same error output
- When printing an error, ensure the name of the program is equivalent to your argv[0]

## List of Allowed Functions and System Calls
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

## Compilation
- Your shell will be compiled using the following command:
  ```sh
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
