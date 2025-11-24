//Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // remove newline from fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // if lengths differ → not a rotation
    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation (different lengths).\n");
        return 0;
    }

    // concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        printf("The second string IS a rotation of the first.\n");
    else
        printf("The second string is NOT a rotation of the first.\n");

    return 0;
}
