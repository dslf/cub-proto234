#include "main.h"
#include <stdio.h>
#include <string.h>

void rotateSide(int direction, int *cube_arr, int *buffer_arr) {   
    memcpy(buffer_arr, cube_arr, SIZE_OF_CUBE * sizeof(cube_arr[0]));
    switch(direction){
        case L:
        /* FRONT -> TOP */
            cube_arr[MAPPING_TOP]=buffer_arr[MAPPING_FRONT];
            cube_arr[MAPPING_TOP+3]=buffer_arr[MAPPING_FRONT+3];
            cube_arr[MAPPING_TOP+6]=buffer_arr[MAPPING_FRONT+6];
        /* TOP -> BACK */
            cube_arr[MAPPING_BACK]=buffer_arr[MAPPING_TOP+6];
            cube_arr[MAPPING_BACK+3]=buffer_arr[MAPPING_TOP+3];
            cube_arr[MAPPING_BACK+6]=buffer_arr[MAPPING_TOP];
        /* BACK -> BOTTOM */
            cube_arr[MAPPING_BOTTOM]=buffer_arr[MAPPING_BACK+6];
            cube_arr[MAPPING_BOTTOM+3]=buffer_arr[MAPPING_BACK+3];
            cube_arr[MAPPING_BOTTOM+6]=buffer_arr[MAPPING_BACK];
        /* BOTTOM -> FRONT*/
            cube_arr[MAPPING_FRONT]=buffer_arr[MAPPING_BOTTOM];
            cube_arr[MAPPING_FRONT+3]=buffer_arr[MAPPING_BOTTOM+3];
            cube_arr[MAPPING_FRONT+6]=buffer_arr[MAPPING_BOTTOM+6];
        /* LEFT SIDE ROTATION, TOP 3 */
            cube_arr[MAPPING_LEFT]=buffer_arr[MAPPING_LEFT+2];
            cube_arr[MAPPING_LEFT+1]=buffer_arr[MAPPING_LEFT+5];
            cube_arr[MAPPING_LEFT+2]=buffer_arr[MAPPING_LEFT+8];
        /* LEFT SIDE ROTATION, CENTER 2 */
            cube_arr[MAPPING_LEFT+3]=buffer_arr[MAPPING_LEFT+1];
            cube_arr[MAPPING_LEFT+5]=buffer_arr[MAPPING_LEFT+7];
        /* LEFT SIDE ROTATION, BOTTOM 3 */
            cube_arr[MAPPING_LEFT+6]=buffer_arr[MAPPING_LEFT];
            cube_arr[MAPPING_LEFT+7]=buffer_arr[MAPPING_LEFT+3];
            cube_arr[MAPPING_LEFT+8]=buffer_arr[MAPPING_LEFT+6];
            break;
        case R:
        /* Front -> Top */
            cube_arr[MAPPING_TOP+2]=buffer_arr[MAPPING_FRONT+2];
            cube_arr[MAPPING_TOP+5]=buffer_arr[MAPPING_FRONT+5];
            cube_arr[MAPPING_TOP+8]=buffer_arr[MAPPING_FRONT+8];
        /* Top -> Back */
            cube_arr[MAPPING_BACK+8]=buffer_arr[MAPPING_TOP+2];
            cube_arr[MAPPING_BACK+5]=buffer_arr[MAPPING_TOP+5];
            cube_arr[MAPPING_BACK+2]=buffer_arr[MAPPING_TOP+8];
        /* Back -> Bottom */
            cube_arr[MAPPING_BOTTOM+2]=buffer_arr[MAPPING_BACK+8];
            cube_arr[MAPPING_BOTTOM+5]=buffer_arr[MAPPING_BACK+5];
            cube_arr[MAPPING_BOTTOM+8]=buffer_arr[MAPPING_BACK+2];
        /* Bottom -> Front */
            cube_arr[MAPPING_FRONT+2]=buffer_arr[MAPPING_BOTTOM+2];
            cube_arr[MAPPING_FRONT+5]=buffer_arr[MAPPING_BOTTOM+5];
            cube_arr[MAPPING_FRONT+8]=buffer_arr[MAPPING_BOTTOM+8];
        /* Right side rotation */
        cube_arr[MAPPING_RIGHT]=buffer_arr[MAPPING_RIGHT+6];
        cube_arr[MAPPING_RIGHT+1]=buffer_arr[MAPPING_RIGHT+3];
        cube_arr[MAPPING_RIGHT+2]=buffer_arr[MAPPING_RIGHT];

        cube_arr[MAPPING_RIGHT+3]=buffer_arr[MAPPING_RIGHT+7];
        cube_arr[MAPPING_RIGHT+5]=buffer_arr[MAPPING_RIGHT+1];

        cube_arr[MAPPING_RIGHT+6]=buffer_arr[MAPPING_RIGHT+8];
        cube_arr[MAPPING_RIGHT+7]=buffer_arr[MAPPING_RIGHT+5];
        cube_arr[MAPPING_RIGHT+8]=buffer_arr[MAPPING_RIGHT+2];
        break;
    }
    /* free(buffer_arr); */
}