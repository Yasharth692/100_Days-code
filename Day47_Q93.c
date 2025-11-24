//Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // remove newline from fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // if lengths are different, not anagrams
    if (strlen(str1) != strlen(str2)) {
        printf("Not Anagrams (Different lengths)\n");
        return 0;
    }

    // count frequency of each letter
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            count1[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            count1[str1[i] - 'A']++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            count2[str2[i] - 'a']++;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            count2[str2[i] - 'A']++;
    }

    // compare frequency arrays
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("The strings are Anagrams.\n");
    else
        printf("The strings are NOT Anagrams.\n");

    return 0;
}
