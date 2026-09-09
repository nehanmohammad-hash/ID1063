// Nehan Mohammad
// 09Sep26_lab, question 7


#include <stdio.h>
#include <stdlib.h> 

void replace_char(char *str, char x, char y) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == x) {
            str[i] = y;
        }
    }
}

int main() {
    int capacity = 100;

    // 2. Dynamic Memory Allocation
    char *str = (char *)malloc(capacity * sizeof(char));
    
    char x, y;

    printf("Input:\n");
    scanf(" %99[^\n]", str); // 4. Passing pointer directly to scanf
    printf("Enter letter to be replaced: ");
    scanf(" %c", &x);
    printf("Enter the new letter: ");
    scanf(" %c", &y);

    replace_char(str, x, y);

    printf("\nOutput:\n%s\n", str);

    // 5. Deallocating Memory
    free(str);
    
    // 6. Preventing Dangling Pointer
    str = NULL;

    return 0;
}

