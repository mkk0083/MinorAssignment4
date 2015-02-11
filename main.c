/**
 * Write a program that takes in an advanced bash program and outputs
 * a standard bash program that has no syntax errors
 * (a.k.a create a Bash++ to Bash transpiler)
 *
 * Created by:
 * --------------------
 * Charles Bido
 * Sam Epstein
 * Mayur Kotamraju
 * (TJ) Emanuel Taylor  
 * --------------------
 * due next Monday
 *
 * FEATURES TO IMPLEMENT
 * ---------------------
 * - bash does not allow spaces, tabs, or newlines around
 *   the "=" symbol used in initialization
 * - the "then" keyword in bash if statements must be on a different line
 *   than the the "if" itself
 * - Also, the brackets ([,]) in bash’s conditionals must have spaces
 *   between the bracket and the condition itself.
 * - 
 * 
 * Notes:
 * - use redirection instead of fileio
 * - allow newlines in redirection 
 * - arg 1 is the bashfile++
 * - arg 2...n is the bashfile++ arguments
 */

// (i.e of valid bash++ syntax but invalid bash syntax)
// num    =                0            
//     if [x -lt 5] then ...

// Your preprocessor will need to change those two statements 
// (and others like them) in the output to be:
// 
// num=0
// if [ x -lt 5 ]
//     then

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bash.h"

int main(int argc, char const *argv[]) {
   /* code */
   return 0;
}

