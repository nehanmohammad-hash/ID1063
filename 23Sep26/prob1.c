//Code by Nehan Mohammad
// 23 Sep 2026, ITP lab;

#include <stdio.h>
#include <math.h>

double rms(double a[], int n);

int main() {
    int n;
    scanf("%d", &n);
    
    double arr[n];
    
    for(int i =0; i<n; i++){
        scanf("%lf", &arr[i]);
        
    }
    
    
    double output;
    output = rms(arr, n);
    
    printf("%.2lf", output);

    return 0;
}

double rms(double a[], int n){
    double result, sqs=0;
    
    for(int i=0; i<n; i++){
        sqs = sqs + pow(a[i],2);
    }
    
    result = sqrt(sqs/n);
    return result;
}
