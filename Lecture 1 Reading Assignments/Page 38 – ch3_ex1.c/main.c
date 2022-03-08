#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j; // declares a variable i and j for integers
    float x, y; // declares a variable x and y for float numbers

    // assigned values for the variables declared
    i = 10;
    j = 20;
    x = 43.2892f; // shows that the value is a float
    y = 5527.0f; // appends f to constant that contains decimal

    // specifies what type of data to be displayed in each variable integer for i and j and float for x and y given the variable respectively
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
}
