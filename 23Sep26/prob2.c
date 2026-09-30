#include <stdio.h>

int main() {
    int day, month;
    
    scanf("%d", &day);
    
    scanf(" %d", &month);
    
    // Days in each month for a standard year (2026 is not a leap year)
    int days_in_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int elapsed = 0;
    
    // Add days for all preceding months
    for (int i = 0; i < month - 1; i++) {
        elapsed += days_in_months[i];
    }
    
    // Add the current day of the ongoing month
    elapsed += day;
    
    printf("%d\n", elapsed);
    
    return 0;
}

