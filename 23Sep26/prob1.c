//Code by Nehan Mohammad
// 23 Sep 2026, ITP lab;

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "matfun.h" // Uses createMat and Matnorm from your prof's library

double calculate_rms(double **arr, int n) {
    return Matnorm(arr, n) / sqrt(n);
}

int main() {
    // --- Test Case 1 ---
    int n1 = 4;
    double **arr1 = createMat(n1, 1);
    double vals1[] = {3.0, 4.0, 0.0, 5.0};
    for(int i = 0; i < n1; i++) {
        arr1[i][0] = vals1[i];
    }

    for(int i = 0; i < n1; i++) {
        printf("%.2lf", arr1[i][0]);
    } 
    
    printf( "\nOutput: %.2lf \n", calculate_rms(arr1, n1));

    // --- Test Case 2 ---
    int n2 = 5;
    double **arr2 = createMat(n2, 1);
    double vals2[] = {1.0, -1.0, 1.0, -1.0, 1.0};
    for(int i = 0; i < n2; i++) {
        arr2[i][0] = vals2[i];
    }
    
    for(int i = 0; i < n1; i++) {
        printf("%.2lf", arr2[i][0]);
    }
    printf("\nOutput: %.2lf \n", calculate_rms(arr2, n2));

    // --- Test Case 3 ---
    int n3 = 1;
    double **arr3 = createMat(n3, 1);
    double vals3[] = {7.5};
    for(int i = 0; i < n3; i++) {
        arr3[i][0] = vals3[i];
    }
    for(int i = 0; i < n1; i++) {
        printf("%.2lf", arr1[i][0]);
    }
    printf("\nOutput: %.2lf \n", calculate_rms(arr3, n3));

    return 0;
}

