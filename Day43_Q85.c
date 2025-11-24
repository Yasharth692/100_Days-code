//Reverse a string.

#include <stdio.h>
#include <string.h>  // for strlen()

int main() {
    char str[100];
    int i, j, temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // input string (with spaces)

    // remove newline from fgets (optional)
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);  // length of string

    // reverse using swapping
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
