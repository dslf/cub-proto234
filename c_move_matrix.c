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
            /* TOP -> BACK */
            cubeArr[MAPPING_BACK]=buffer[MAPPING_TOP+6];
            cubeArr[MAPPING_BACK+3]=buffer[MAPPING_TOP+3];
            cubeArr[MAPPING_BACK+6]=buffer[MAPPING_TOP];
            /* BACK -> BOTTOM */
            cubeArr[MAPPING_BOTTOM]=buffer[MAPPING_BACK+6];
            cubeArr[MAPPING_BOTTOM+3]=buffer[MAPPING_BACK+3];
            cubeArr[MAPPING_BOTTOM+6]=buffer[MAPPING_BACK];
            /* BOTTOM -> FRONT*/
            cubeArr[MAPPING_FRONT]=buffer[MAPPING_BOTTOM];
            cubeArr[MAPPING_FRONT+3]=buffer[MAPPING_BOTTOM+3];
            cubeArr[MAPPING_FRONT+6]=buffer[MAPPING_BOTTOM+6];
            /* LEFT SIDE ROTATION, TOP 3 */
            cubeArr[MAPPING_LEFT]=buffer[MAPPING_LEFT+2];
            cubeArr[MAPPING_LEFT+1]=buffer[MAPPING_LEFT+5];
            cubeArr[MAPPING_LEFT+2]=buffer[MAPPING_LEFT+8];
            /* CENTER 2 */
            cubeArr[MAPPING_LEFT+3]=buffer[MAPPING_LEFT+1];
            cubeArr[MAPPING_LEFT+5]=buffer[MAPPING_LEFT+7];
            /* BOTTOM 3 */
            cubeArr[MAPPING_LEFT+6]=buffer[MAPPING_LEFT];
            cubeArr[MAPPING_LEFT+7]=buffer[MAPPING_LEFT+3];
            cubeArr[MAPPING_LEFT+8]=buffer[MAPPING_LEFT+6];
            break;
    }
    /* printf("do we free?\n"); */
    free(buffer);
}