// Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // take input with spaces

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;    // convert lowercase to uppercase
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;    // convert uppercase to lowercase
        }
    }

    printf("Toggled string: %s", str);

    return 0;
}
