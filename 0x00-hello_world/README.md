Introduction to C programming

* The shebang '#!/bin/bash' when used in scripts is used to instruct the operating system to use bash as a command interpreter (Must be the first line in scripts)

* gcc - 'GNU Compiler Collection' performs the compilation step to build a program the calls other programs to accemble and link the programs component parts into an executable program

* The preprocessor is the initial step in compiling a c file, it removes comments, include hearder files and replaces the macro name with code

* The compiler then takes the code generated from the preprocessing and transform it into an assembly code

* The assembler will take the code and transform it into a language the machine can understand (binaries 010110), the code is commonly know as object code 

* Finally the linker takes the object code and other files gone through the same process and create a single executable file

$CFILE is a variable that contains any code written in C language

gcc -E $CFILE : A file created that only in the preprocessor step

gcc -c $CFILE : A file created at the compiler step, the $CFILE contains the file main.c and the result is the file main.o

gcc -S $CFILE : A file created at the assembler, the result is a file written in object code and the final file is main.s

gcc -o cisfun $CFILE : -o flag makes a file with the name cisfun from a file stored in varible $CFILE

: $CFILE contains the file main.c

Reference : Fernado Sandoval

END :)
