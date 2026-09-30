#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Enter length of array (max 100): ");
    scanf("%d", &n);

    // Ensure n is within bounds
    if (n <= 0 || n > 100) {
        printf("Error: n must be between 1 and 100.\n");
        return 1;
    }

    int coins[100];
    srand(time(NULL));

    // Automatically generate a random vector with values between 1 and 100
    printf("Original random array: ");
    for (int i = 0; i < n; i++) {
        coins[i] = (rand() % 100) + 1; 
        printf("%d", coins[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");

    // Find the minimum value in the array
    int min_val = coins[0];
    for (int i = 1; i < n; i++) {
        if (coins[i] < min_val) {
            min_val = coins[i];
        }
    }
	/*
    // Change ALL minimum values to 0
    for (int i = 0; i < n; i++) {
        if (coins[i] == min_val) {
            coins[i] = 0;
        }
    }

    // Print the new vector
    printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", coins[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }*/
    printf("\n");

    return 0;
}

