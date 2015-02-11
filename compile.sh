#!bin/bash

# this script compiles all the .c files in the working directory
# and then runs the progxram


# clears the screen
clear
# compiles program2
echo 'Compiling the program...';
if gcc -o minor4 *.c; then
# runs program2
echo 'Running the program...';
./minor4;
echo 'Done running the program.';
else
echo 'Compilation failed';
fi
