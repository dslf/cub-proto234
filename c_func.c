#include "main.h"
#include <stdio.h>


void drawRawCube(int *cube){
    int i;
    for (i = 0; i < SIZE_OF_CUBE; i++) {
        printf("pos: %d = %d\n",i, cube[i]);
    }
}

void setColor(int n) {
	if (n == 0) printf("\e[47m");			/* White */
	if (n == 1) printf("\e[43m");			/* Orange */ 
	if (n == 2) printf("\e[42m");			/* Green */
	if (n == 3) printf("\e[41m");			/* Red */
	if (n == 4) printf("\e[44m");			/* Blue */
	if (n == 5) printf("\x1b[48;5;226m");	/* Yellow */
}

void resetColor() { /* Actually, I can move this func to above, like n=6 is reset */
	printf("\033[0m"); /* Default console color */
}

void resetCube(int *cube){
    int i,j;
    int k=0;
    for (i = 0; i < 6; i++)
        for(j = 0; j < 9; j++){
            cube[k] = i;
            if (XDDEBUG) printf("k=%d i=%d j=%d\n",k, i, j);
            k++;
    }
}

void drawCube(int *cube) {
	int i, j, k = 0;
    /* Top (White) */
	for (j = 0; j < 9; j++) {
		if (k == 0) {
			resetColor();
			printf("       ");
		}
		if (k == 3) {
			k = 0;
			printf("\n");
			resetColor();
			printf("       ");
		}
		setColor(cube[0+j]);
		printf("  ");
		resetColor();
		k++;
	}
	printf("\n\n");
	k = 0;

    /* Middle row (Orange, Green, Red, Blue) */
	for (i = 1; i < 5; ++i)
		for (j = 0; j < 3; j++) {
			if (k == 3) {
				k = 0;
				resetColor();
				printf(" ");
			}
            setColor(cube[SIZE_OF_SIDE*i+j]);
			printf("  ");
			resetColor();
			++k;
		}
	printf("\n");
	k = 0;

	for (i = 1; i < 5; ++i)
		for (j = 3; j < 6; j++) {
			if (k == 3) {
				k = 0;
				resetColor();
				printf(" ");
			}
            setColor(cube[SIZE_OF_SIDE*i+j]);
			printf("  ");
			resetColor();
			++k;
		}
	printf("\n");
	k = 0;

	for (i = 1; i < 5; ++i)
		for (j = 6; j < 9; j++) {
			if (k == 3) {
				k = 0;
				resetColor();
				printf(" ");
			}
            setColor(cube[SIZE_OF_SIDE*i+j]);
			printf("  ");
			resetColor();
			++k;
		}
	printf("\n");

	for (j = 0; j < 9; j++) {
		if (k == 0) {
			resetColor();
			printf("       ");
		}
		if (k == 3) {
			k = 0;
			printf("\n");
			resetColor();
			printf("       ");
		}

		/* Bottom (Yellow) */
        setColor(cube[SIZE_OF_SIDE*5+j]);
		printf("  ");
		resetColor();
		k++;
	}
	printf("\n");
}