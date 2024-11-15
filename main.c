#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "c_func.c"

int main(int agrc, char *argv[]) {
    int *cube;

    cube = malloc(sizeof(cube)*9*6);
    printf("size of cube array is: %d\n", SIZE_OF_CUBE);
    drawCube(cube);
    free(cube);
    return 0;
    
}