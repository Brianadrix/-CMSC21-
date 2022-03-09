#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, digit; // declares variables
    printf("Enter a three digit number: "); // asks the user to input 3 digit number
    scanf("%d", &digit); // stores the inputed value in the variable digit
    a = digit % 10; // isolates the last digit number
    digit = digit / 10; // removes last digit from the digit
    b = digit % 10; // isolate the second digit number
    digit = digit / 10; // removes second digit from the digit
    digit = a * 100 + b * 10 + digit; // append the digit to reverse
    printf("Reverse number is %d", digit); // prints out the reversed digit

    return 0;
}
