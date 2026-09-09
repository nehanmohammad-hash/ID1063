#include <stdio.h>

int main() {
    char str[100];

    // Read string input safely
    printf("Input: ");
    scanf("%99s",str);

   

    // Task 1: Find the length of the string
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        if (str[i] == str[len - 1 - i]) {
        printf("Output: Palindrome\n");
	break;
        }
	else {
	printf("Output: Not a palindrom\n");
	break;
	}
    }


    return 0;
}

