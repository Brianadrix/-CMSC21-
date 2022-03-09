#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit, remainder, reverse, digit1 = 0; // declares variable
    printf("Enter a two digit number: "); // asks user for input
    scanf("%d", &digit); // store the inputed value in digit variable

    remainder = digit % 10; // isolates the last digit number
    digit1 = digit/10; // removes last digit from the digit
    reverse = (remainder *10)+ digit1; // append last digit to reverse
    printf("The reverse of number of %d is %d", digit, reverse);

  return 0;
}

//}
