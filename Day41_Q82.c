//Print each character of a string on a new line.

#include <stdio.h>

int main() {
    char str[100];  // max 99 chars + '\0'

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // user input le raha hai

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')  // fgets ke sath newline aata hai, usko skip karne ke liye
            continue;
        printf("%c\n", str[i]);
    }

    return 0;
}
