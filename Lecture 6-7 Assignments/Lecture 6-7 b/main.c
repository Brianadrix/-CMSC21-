#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway) / sizeof(pathway[0])))
int main()
{

    bool pathway[8] = {{true},{false},{true}}; // if inner isn't fill the remaining elements are initialized to false or 0
    for (int i = 0; i < NUM_PATHWAYS; i++){
        if (pathway[i]){
            printf("pathway[%d] is open \n", i);
        }else{
            printf("pathway[%d] is close \n", i);
        }
        }

    return 0;
}
