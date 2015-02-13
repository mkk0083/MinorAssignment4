/**
 * TODO
 * - implement a "stream" variable to store the final output
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// function prototypes
void parse_ifelse();

int main() {
   /**
    * This is a test array that silmulates the
    * format on how data is stored from the file
    */
   char testArray[][100] =  {{'n','u','m'}, {'='}, {'0'}, {'i','f'}, {'[','x'}, {'-','l','t'}, {'5',']'}, {'t','h','e','n'}, {'.','.','.'}, {'o','n','e'}, {'t','w','o'}, {'t','h','r','e','e'}, {'f','o','u','r'}};

   // final output storage
   char stream[100000];

   int limit = 13;
   // SOLUTION 1?
   // for (int i = 0; i < limit; i++) {
   //    if(strcmp(testArray[i], "if") == 0) {
   //       printf("debug: entering the bash \"if\" conditional...(loop:%d)\n", i); // for debugging
   //    }
   // }   
   // return 0;
   
   // SOLUTION 2?
   for (int i = 0; i < limit; i++) {
      for(int j=0; j < 100; j++) {
         if(testArray[i][j] == 'i' && testArray[i][j+1] == 'f') {
            printf("debug: entering the bash \"if\" conditional...(loop:%d)\n", i); // for debugging   
         }
      }     
   }   
   return 0;
}

// function definitions

void parse_ifelse() {
}