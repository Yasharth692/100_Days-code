// Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // take input (including spaces)

    // loop through each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';   // replace space with hyphen
        }
    }

    printf("Modified string: %s", str);

    return 0;
}
