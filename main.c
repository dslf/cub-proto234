#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "c_func.c"
#include "c_move_matrix.c"
#include "main.h"

int main(int agrc, char *argv[]) {  
	int *cube;
	int *buffer;

	buffer = malloc(sizeof(buffer) * SIZE_OF_CUBE);
	cube = malloc(sizeof(cube) * SIZE_OF_CUBE);
	/* memset(cube, 0, sizeof(cube) * SIZE_OF_CUBE); */
	resetCube(cube);
	/* rotateSide(L, cube, buffer); */
	
	/* cstimer test scramble: 	https://i.imgur.com/lGIOgyH.png */
/*	rotateCube("R2 F' L2 F U2 B R2 B2 L2 F U2 B2 U L2 B' R F U' L2 R' B", cube, buffer);  */

	runTestSolve(cube, buffer, 0);

	free(cube);
	free(buffer);
	return 0;
}
