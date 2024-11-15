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
	rotateCube("U2 L' B2 L2 D2 R F2 R F2 R' B' L U2 R U L B' R'", cube, buffer);
	
	

	drawCube(cube);
	free(cube);
	free(buffer);
	return 0;
}