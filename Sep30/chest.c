#include <stdio.h>
#include <stdlib.h>
#include "libs/coeffs.h"

int main() {
    int n;
    printf("Enter length of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid length.\n");
        return 1;
    }

    char *filename = "coins.txt";

    // 1. Generate n uniform random numbers (0.0 to 1.0) and store in file using coeffs.h
    uniform(filename, n);

    // 2. Dynamically allocate memory for an array of any size n
    int *coins = malloc(n * sizeof(int));

    // 3. Read numbers from the file, scale them to integers between 1 and 100
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        free(coins);
        return 1;
    }

    double val;
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        if (fscanf(fp, "%lf", &val) == 1) {
            // Scale [0, 1) float to integer [1, 100]
            coins[i] = (int)(val * 100.0) + 1;
            if (coins[i] > 100) coins[i] = 100; // Safety cap for 1.0

            printf("%d", coins[i]);
            if (i < n - 1) printf(" ");
        }
    }
    printf("\n");
    fclose(fp);

    // 4. Find the minimum value in the array
    int min_val = coins[0];
    for (int i = 1; i < n; i++) {
        if (coins[i] < min_val) {
            min_val = coins[i];
        }
    }

    // 5. Change ALL minimum values to 0
    for (int i = 0; i < n; i++) {
        if (coins[i] == min_val) {
            coins[i] = 0;
        }
    }

    // 6. Print the modified array
    printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", coins[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    // Clean up dynamic memory
    free(coins);

    return 0;
}

