#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../libs/matfun.h"

	
int main() {
    int r1, c1, r2, c2;

    // Read dimensions of matrix A
    scanf("%d %d", &r1, &c1) 

    // Create and read matrix A using matfun's allocation
    double **A = createMat(r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%lf", &A[i][j]);
        }
    }

    // Read dimensions of matrix B
    scanf("%d %d", &r2, &c2) 
    // Create and read matrix B using matfun's allocation
    double **B = createMat(r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%lf", &B[i][j]);
        }
    }

    // Compute matrix product A * B using matfun's Matmul function
    double **C = Matmul(A, B, r1, c1, c2);

    // Print the result. 
    // Note: matfun's printMat prints doubles with decimals. 
    // Since the input contains integers, we can loop and cast or use printMat directly.

    printMat(c, r1, c1);

    return 0;
}
	
		
	return 0;
}
