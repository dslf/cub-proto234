#include <stdio.h>
#include <stdlib.h>
/* #include <string.h> */
#include "c_func.c"
#include "c_move_matrix.c"
#include "main.h"

int main(int agrc, char *argv[]) {  
	int *cube, *total, *buffer, i;
	char **scrambles;

	total = malloc(sizeof(total[0]));
	buffer = malloc(sizeof(buffer) * SIZE_OF_CUBE);
	cube = malloc(sizeof(cube) * SIZE_OF_CUBE);
	/* memset(cube, 0, sizeof(cube) * SIZE_OF_CUBE); */
	resetCube(cube);
	/* rotateSide(L, cube, buffer); */
	
	/* cstimer test scramble: 	https://i.imgur.com/lGIOgyH.png */
/*	rotateCube("R2 F' L2 F U2 B R2 B2 L2 F U2 B2 U L2 B' R F U' L2 R' B", cube, buffer);  */

        if (!loadScrambles(&scrambles, total)) { 
          printf("Found\n");
          for (i = 0; i < *total - 1; i++) {
            rotateCube(scrambles[i], cube, buffer);
            /* drawCube(cube); */
          }
        }
        /* printf("105: %s", scrambles[105]); */
	/* freeScrambles(scrambles, size_of_scrambles);  */
	
	/* runTestSolve(cube, buffer, 0);  */
	
	/* for (i=0; i < *total; i++) printf("strings[%d] = %s\n", i, scrambles[i]); */
	resetCube(cube);
	rotateCube("R F2 L2 U2 R2 U2 B2 L2 B2 U' B2 U' R' B L' U F2 D2 B' D'", cube, buffer);
	drawCube(cube);
 	free(cube);
	free(buffer); 
	freeScrambles(&scrambles, total);
	printf("koroche zaebal %d\n", *total);
	return 0;
}