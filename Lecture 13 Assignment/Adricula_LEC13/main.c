#include <stdio.h>
#include <stdlib.h>


struct point { // structure tag point
    float x; // member x and y
    float y;
};

// formula for slope using function
float solveSlope(struct point a, struct point b)
{
    float slope;
    slope =(b.y-a.y)/(b.x-a.x); // structure member is accessed using dot operator
    return slope;
}
// formula for midpoint using function
float solveMidpoint(struct point a, struct point b)
{
    float midpoint, midpoint1, midpoint2;
    // structure member is accessed using dot operator
    midpoint1=(a.x + b.x)/2;
    midpoint2=(a.y + b.y)/2;
    midpoint = midpoint1, midpoint2;
    return midpoint;
}
// formula for distance of 2 points using functions
float solveDistance(struct point a, struct point b)
{
    float distance;
    // structure member is accessed using dot operator
    distance = sqrt((a.x - b.x) * (a.x - b.x) + (a.y-b.y) *(a.y-b.y));
    return distance;
}
// formula for slope intercept form
float getSlopeInterceptForm(struct point a, struct point b)
{
    float slopeInt, m,c;
    m =(b.y-a.y)/(b.x-a.x); // solving for slope
    c = b.y -(m * b.x); // solving for b with the variable c
    slopeInt = m, c;
    return slopeInt;
}

int main()
{
    struct point a, b;
    printf("Enter x and y for point1: ");
    scanf("%f %f", &a.x, &a.y);
    printf("Enter x and y for line2: ");
    scanf("%f %f", &b.x, &b.y);
    // calls the function for every solution
    printf("Slope: %f\n", solveSlope(a, b));
    printf("Midpoint: %f %f\n", solveMidpoint(a, b));
    printf("Distance between 2 points: %f\n", solveDistance(a, b));
    printf("slope (y)=%.0fx+%.0f", getSlopeInterceptForm);



    return 0;
}
