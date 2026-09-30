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
    
    // 1. Generate uniform random numbers and save to file using coeffs.h
    uniform(filename, m * n);

    // 2. Load the numbers into an m x n 2D matrix using matfun.h
    double **mat = loadMat(filename, m, n);[span_1](start_span)[span_1](end_span)

    // 3. Binarize the original matrix (0 or 1)
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = (mat[i][j] > 0.5) ? 1.0 : 0.0;
        }
    }

    // 4. Create a new matrix for the processed result using matfun.h
    double **resultMat = createMat(m, n);[span_2](start_span)[span_2](end_span)

    // 5. Process cells: 1 -> -1, 0 -> count of neighboring 1s
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1.0) {
                resultMat[i][j] = -1.0;
            } else {
                int count = 0;
                // Check all 8 surrounding neighbors
                for (int di = -1; di <= 1; di++) {
                    for (int dj = -1; dj <= 1; dj++) {
                        if (di == 0 && dj == 0) continue; // Skip the cell itself
                        
                        int ni = i + di;
                        int nj = j + dj;
                        
                        // Ensure neighbor is within matrix bounds
                        if (ni >= 0 && ni < m && nj >= 0 && nj < n) {
                            if (mat[ni][nj] == 1.0) {
                                count++;
                            }
                        }
                    }
                }
                resultMat[i][j] = (double)count;
            }
        }
    }

    // 6. Print the original binary matrix for reference
    printf("\nOriginal Binary Matrix:\n");
    printMat(mat, m, n);[span_3](start_span)[span_3](end_span)

    // 7. Print the newly processed matrix without decimals
    printf("\nProcessed Matrix (1s -> -1, 0s -> neighbor 1s count):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.0lf ", resultMat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

