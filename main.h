#pragma once

#define SIZE_OF_CUBE 3*3*6

int main(int, char**);
void drawCube(int *);
void resetCube(int *);


#define w 1
#define o 2
#define g 4
#define r 8
#define b 16
#define y 32
#define FLIPPED 64

#define wg 1
#define wr 2
#define wb 4
#define wo 8

#define gr 16
#define go 32
#define ob 64
#define br 128 

#define yg 256
#define yo 512
#define yb 1024
#define yr 2048



/* 
wogrby
111111

wg 1 + 4 = 5 (10100)

 */