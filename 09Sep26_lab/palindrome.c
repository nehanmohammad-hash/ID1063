//Nehan Mohammad
//09Sep26_lab, question 5

#include <stdio.h>

void palindrome(const char str[]) {
    // Task 1: Find the length of the string
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    // Task 2: Check Palindrome condition
    int i;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            break;
        }
    }

    // Task 3: Print result
    if (i == len / 2) {
        printf("Output: Palindrome\n");
    } else {
        printf("Output: Not a Palindrome\n");
    }
}

int main() {
    char str[100];

    // Read string input safely
    printf("Input: ");
    scanf(" %99[^\n]", str);

    // Call the function
    palindrome(str);

    return 0;
}

