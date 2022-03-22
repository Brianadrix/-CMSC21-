#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // declare variables
    int age;
    bool teenager; // boolean of true and false
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 13 && age <=19){ // simplified code
        teenager = true;
    }
    else{
        teenager = false;
    }
    //prints out a string of true or false of the teenager
    printf("Teenager: %s\n", teenager ? "true" : "false");

    return 0;
}

