// code for the 2 powers of n
#include<stdio.h>
  int main() {
    // declared variables
    int power;
    int num;

    printf("\n n    2 to the n");
    printf("\n---   ----------");

    power = 1; // initialized power
    for (num = 0; num < 11; ++num) { // initialized number for 0, if number is less than 11 then it will increment
      if (num == 0) // if num is 0 it will just print 1 for the power
        power = 1;
      else
        power = power * 2; // if num is not zero the num will be mutiply to 2
      printf("\n%2d   %8d", num, power);
    }
    printf("\n");
    return 0;
  }
