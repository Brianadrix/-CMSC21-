/* Finds the negative numbers in an array */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;

    printf("Enter N: ", N);
    scanf("%d", &N);

    int a[N];

    for (i =0; i < N; i++){
        printf("a[%d] =", i);
        scanf("%d", &a[i]);
    }

    printf("Negative numbers: \n");

    for (i = 0; i < N; i++){
        if (a[i] < 0){
            printf("a[%d] = %d is a negative number. \n", i, a[i]);
        }
    }
    return 0;
}
