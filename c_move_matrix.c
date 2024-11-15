#include "main.h"
#include <stdio.h>
#include <string.h>

void rotateSide(int direction, int *cubeArr) {
    size_t size = SIZE_OF_CUBE * sizeof(cubeArr[0]);
    int *buffer = (int *)malloc(size);

    memcpy(buffer, cubeArr, size);
    printf("Hello from rotate side %d\n", size);
    drawCube__(buffer);
    switch(direction){
        case L:
            /* FRONT -> TOP */
            cubeArr[MAPPING_TOP]=buffer[MAPPING_FRONT];
            cubeArr[MAPPING_TOP+3]=buffer[MAPPING_FRONT+3];
            cubeArr[MAPPING_TOP+6]=buffer[MAPPING_FRONT+6];

            /* BOTTOM -> FRONT*/
            cubeArr[MAPPING_FRONT]=buffer[MAPPING_BOTTOM];
            cubeArr[MAPPING_FRONT+3]=buffer[MAPPING_BOTTOM+3];
            cubeArr[MAPPING_FRONT+6]=buffer[MAPPING_BOTTOM+6];

            break;
    }
    /* printf("do we free?\n"); */
    free(buffer);
}