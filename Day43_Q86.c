// Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, flag = 1;  // flag = 1 means palindrome

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline from fgets
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;  // not palindrome
            break;
        }
    }

    if (flag == 1)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is NOT a Palindrome.\n");

    return 0;
}