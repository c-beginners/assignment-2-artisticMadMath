#include <stdio.h>
#include <iostream>

using std::cout;
using std::endl;
using std::string;


void CharCounter(char input[]) {
   //int charCounter[];

}

string GetFoundChars(char input[]) {
   // int size = 0;
   string foundChars = "";

   for (int i = 0; input[i] != '\0'; i++) {
      for (int j = 0; j < foundChars.size()-1; j++) {
      // if (input[i] not in foundChars)
         if ( (foundChars[j] == '\0') || (input[i] != foundChars[j]) ) {
            foundChars = foundChars + input[i];
         }
      }
   }

   return foundChars;
}


int main() {

   return 0;
}


/* In a given array of chars, find out what character is included the most times.
 E.g: ”A, C, C, B, B, A, C” and also print how many times it occours,
 for this example it would be ”C: 3”. Try to do this in as low time-complexity
 as possible. (This question will come in handy if you do intervjues for
 developer jobs)
 Bonus task, print the first occourance of a douplicated char
 */
