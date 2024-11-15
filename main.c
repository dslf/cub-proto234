#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "c_func.c"
#include "main.h"

int main(int agrc, char *argv[]) {
    int *cube;

    cube = malloc(sizeof(cube)*9*6);
    memset(cube, 0, sizeof(cube) * SIZE_OF_CUBE);
  
    cube[52]=30;
    resetCube(cube);
    printf("size of cube array is: %d\n", SIZE_OF_CUBE);
    drawCube(cube);
    free(cube);
    return 0;
    
}