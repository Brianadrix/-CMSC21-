#include <stdio.h>
#include <math.h>
int main(void){

    // declared variables
    double x;
    double y;
    double yn;
    double tol;

    tol = 0.00001; // given

    printf("Enter a number: "); // asks the user to enter a number
    scanf("%lf", &x); // specify in a long float stored in x variable

    y = 1; // initialized guess
    yn = 0.5*(y+(x/y)); // formula

    while(fabs(yn-y) > tol ){ // fabs function to find the absolute value of yn-y that is should be greater than the tolerance
        y = yn;
        yn= 0.5*(y+(x/y));
    }
    printf("The final approximation of %lf is %lf",x,y);

    return 0;

}
