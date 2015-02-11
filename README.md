# MinorAssignment4
The repo for CSCE 3600 Minor Assignment 4

##Minor Assignment #4 – Converting SuperBash Programs to Bash

In this assignment you will write a C program that takes an advanced  bash (bash++ ?) program and outputs a standard bash program that has no syntax errors.  You are to complete this assignment in as a group, using your already assigned groups.   You will also submit the assignment as a group.  Make sure to include the names of all group members who worked on the assignment in comments within your C program. **As in the past, only the group submission will be graded.  We will NOT grade both a group submission and any singleton submissions from the same group.**

So, there are two features of `bash++` (*no its NOT an OO language*) that are not supported by bash in general, namely: 1) bash does not allow spaces, tabs or newlines around the "=" symbol used in initialization,  and 2) the "then" keyword in bash if statements must be on a different line than the if itself. Also, the brackets (`[,]`) in bash’s conditionals must have spaces between the bracket and the condition itself.  So, the following two statements  (*legal in `bash++`*) are not acceptable to bash,

```bash
num    =                0            
if [x -lt 5] then ...
```

Your preprocessor will need to change those two statements  (and others like them) in the output to be:

```bash
num=0
if [ x -lt 5 ]
then
```

Again as a "*preprocessor*" your program will not actually change the input file itself but rather copy the input file to output making the necessary changes to the output file to make it "*bashable*".

Two items which may seem to you to be choices of the implementation are in fact REQUIRED, namely

**The program MUST be written in C**, not C++ (or java, bash, ruby, …).   If it is not written in C even if it “works” for minor 4 I guarantee it will NOT work in the context I will require for a future assignment.

The name of the `bash++` file must be passed to your C program’s executable as command line argument 1.   And any command line arguments required for the bash++ program will (must be) passed to your C program’s executable as command line arguments 2 .. n

You will submit your **single C file** (that is your working program) to Blackboard at or before the stated deadline.

Good luck.