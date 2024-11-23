#pragma once

#define SIZE_OF_SIDE 9      /* (3 * 3) */
#define SIZE_OF_CUBE 54     /* ((3 * 3) * 6) */

#define MAPPING_TOP 0
#define MAPPING_LEFT 9
#define MAPPING_FRONT 18
#define MAPPING_RIGHT 27
#define MAPPING_BACK 36
#define MAPPING_BOTTOM 45


#define XDDEBUG 0

#define L 0
#define R 1
#define F 2
#define B 3
#define U 4
#define D 5

#define L2 10
#define R2 11
#define F2 12
#define B2 13
#define U2 14
#define D2 15

#define Li 20
#define Ri 21
#define Fi 22
#define Bi 23
#define Ui 24
#define Di 25


int main(int, char**);
void runTestSolve(int *, int *, int);
void drawCube(int *);
void resetColor();
void setColor(int n);
void drawRawCube(int *);
void resetCube(int *);
void printCubeArray(int *);
void rotateSide(int, int*, int*);
void rotateCube(const char *str, int *, int *);
int loadScrambles(char ***, int *);
void freeScrambles(char ***, int *);



/* Here I hide my useless stuff, in case it comes in handy  */

/* don't ask why not hardcode mapping - 0 9 18 27 36 45 *//*

#define SIZE_OF_SIDE 3 * 3 
#define SIZE_OF_CUBE SIZE_OF_SIDE * 6

#define MAPPING_TOP 0
#define MAPPING_LEFT MAPPING_TOP + SIZE_OF_SIDE
#define MAPPING_FRONT MAPPING_LEFT + SIZE_OF_SIDE
#define MAPPING_RIGHT MAPPING_FRONT + SIZE_OF_SIDE
#define MAPPING_BACK MAPPING_RIGHT + SIZE_OF_SIDE
#define MAPPING_BOTTOM MAPPING_BACK + SIZE_OF_SIDE */