// Adds two fractions //
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, denom1, num2, denom2, result_num, result_denom; // declaring variables

   printf("Enter first fraction: "); // asks the user to input the first fraction (displays on console)
   scanf("%d/%d", &num1, &denom1); // allows the user to input a integer value (fraction) to be stored in the variable num1 and denom1 respectively

   printf("Enter second fraction: "); // asks the user to input the first fraction (displays on console)
   scanf("%d/%d", &num2, &denom2); // allows the user to input a integer value (fraction) to be stored in the variable num1 and denom1 respectively

   result_num = num1 * denom2 + num2 * denom1; // cross multiplies the fraction stored in result_num

   result_denom = denom1 * denom2; // multiplies the two denominator stored in result_denom
   printf("The sum is %d/%d\n", result_num, result_denom); // displays the result making a fraction of the numerator and the denominator

   return 0;
}
