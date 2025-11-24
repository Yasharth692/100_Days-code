//Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string in lowercase: ");
    fgets(str, sizeof(str), stdin);  // read input including spaces

    // loop through each character
    for (int i = 0; str[i] != '\0'; i++) {
        // check if character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   // convert to uppercase
        }
    }

    printf("Uppercase string: %s", str);

    return 0;
}
