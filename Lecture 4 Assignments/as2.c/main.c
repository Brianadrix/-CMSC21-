#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i = 1;
    while (i < 10){
        printf("%d", &i);
        i *= 2;
    }
    return 0;
}
