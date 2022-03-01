// Prints int and float values in various formats //
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i; // declares a variable that accepts integer
   float x; // declares a variable that accepts a float

   // gives a value for the declared variable
   i = 40;
   x = 839.21f; // indicates that this is a float number using f

   // displays how much the amount of space are occupied when it prints i and x
   //minumum amount of space, minimum 5 characters, minimum of 5 characters left justified, minimum of 5 char right justified respectively //
   printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

   //10 characters overall, exponential form using 10 characters, left justification respectively //
   printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

   return 0;
}
