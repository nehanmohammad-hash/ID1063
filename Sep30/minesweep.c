#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "libs/coeffs.h"
#include "libs/matfun.h"

int main() {
    int m, n;
    printf("Enter rows (m) and columns (n): ");
    if (scanf("%d %d", &m, &n) != 2) return 1;

    char *filename = "mat1.txt";
    
    // 1. Generate m * n uniform random numbers and save to file using coeffs.h
    uniform(filename, m * n); //[span_3](start_span)[span_3](end_span)

    // 2. Load the numbers into an m x n 2D matrix using matfun.h
    double **mat = loadMat(filename, m, n); //[span_4](start_span)[span_4](end_span)

    // 3. Convert each element to binary (0 or 1)
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] > 0.5) {
                mat[i][j] = 1.0;
            } else {
                mat[i][j] = 0.0;
            }
        }
    }

    // 4. Print the resulting random binary matrix using matfun.h
    printf("\nGenerated %d x %d Binary Matrix:\n", m, n);
    printMat(mat, m, n); 
    return 0;
}

