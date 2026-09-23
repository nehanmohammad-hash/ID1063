#include <stdio.h>
#include <stdlib.h>

int firstStable(double a[], int n, double tolerance) {
    // Loop from i = 1 to n - 2 (matching range(1, n-1) in Python)
    for (int i = 1; i < n - 1; i++) {
        double diff1 = -a[i] + a[i-1];
        double diff2 = -a[i+1] + a[i];
        double diff3 = diff1 - diff2;
        
        if (diff3 <= tolerance) {
            return i + 1; // Returns 1-based position
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array of size n
    double *a = (double *)malloc(n * sizeof(double));
    
    printf("Enter an array of length %d: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }

    double tolerance;
    printf("Enter tolerance: ");
    scanf("%lf", &tolerance);

    int value = firstStable(a, n, tolerance);
    printf("%d\n", value);

    // Free allocated memory
    free(a);
    
    return 0;
}

