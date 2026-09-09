//made by Nehan Mohammad
//ID1063, 09-Sep Lab, Question 4

#include <stdio.h>
const int Max_limit = 100;
int findchar(const char str[], char target) {
    for (int i = 0; i<=Max_limit ; i++) {
        if (str[i] == target) {
		int j;
		j = i+1;
            return j;
	    // Return the 0-based index immediately upon first match
        }
    }
    return -1; // Character not found
}

int main() {
    char input[Max_limit];
    char tg;

    // Read string input
    printf("Input: ");
    scanf("%99s", input);

    // Read character input (note the leading space in " %c" to consume newlines)
    printf("character: ");
    scanf(" %c", &tg);


    // Find and output result
    int index = findchar(input, tg);
    printf("Output: %d\n", index);

    return 0;
}



