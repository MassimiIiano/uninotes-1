# OS

## istall linux on windows
```powershell
wsl --install   # reboot the computer
wsl --install -d <Distribution Name>
```

## unix
- developed between 1969 and 1973 at AT&T Bell Labs
- written in C
- hugely influential

## unix like systems
- linux
- bsd
- android (based on linux)
- mac os x (based on bsd)
- windows is **not** based on unix

### posix
- portable operating system interface
- defined in IEEE 1003
- basic user iinterface (terminals, shells, utilities)
- programming interface (C library, system calls)

### shells
- bash is the standard shell on most linux systems
- programms are searched in th PATH environment variable

Shells have a `current working directory` and a `home directory`, commands will be executed in the current working directory, unless the path is absolute or the command is in the PATH environment variable

#### important commands
- `ls` list files
- `cd` change directory
- `pwd` print working directory
- `cp` copy files
- `mv` move files
- `rm` remove files
- `mkdir` make directory
- `rmdir` remove directory
- `cat` concatenate files
- `less` view files
- `man` view manual pages

other usefull commands:
- `echo` print to the terminal
- `grep` search for a pattern
- `find` search for files
- `wc` word count
- `head` print the first lines of a file
- `tail` print the last lines of a file
- `sort` sort lines

#### redirection and pipes
- `>` redirect output to a file
- `>>` append output to a file
- `<` redirect input from a file
- `|` pipe output to another command
- `2>` redirect error output to a file
- `2>>` append error output to a file
- `&>` redirect both output and error output to a file
- `&>>` append both output and error output to a file
- `|&` pipe both output and error output to another command
- `tee` write to a file and to the terminal

```bash
echo "hello" > file.txt     # creates a file with the content "hello"
echo "world" >> file.txt    # appends "world" to the file
cat file.txt                # prints the content of the file
cat file.txt | wc           # prints the number of lines, words and characters in the file
```

#### environment variables
use `env` to list all environment variables
use `export` to set an environment variable
use `$` to access the value of an environment variable (e.g. `echo $HOME`)

- `PATH` contains the directories where the shell searches for programs
- `HOME` contains the home directory
- `PWD` contains the current working directory
- `USER` contains the username

and many others 