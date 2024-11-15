#include "main.h"
#include <stdio.h>

void drawCube(int *cube){
    int i;
    for (i = 0; i < SIZE_OF_CUBE; i++) {
        printf("%d = %d\n",i, cube[i]);
    }
}

void resetCube(int *cube){
    int i,j;
    int k=0;
    printf("hello from resetCube\n");
    for (i = 0; i < 6; i++)
        for(j = 0; j < 9; j++){
            cube[k] = i;
            printf("k=%d i=%d j=%d\n",k, i, j);
            k++;

    }
}
