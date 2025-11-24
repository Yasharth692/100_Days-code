//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50], word[50];
    int i = 0, j = 0, maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';  // remove newline

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
            currLen++;
        } else {
            word[j] = '\0'; // end of current word
            if (currLen > maxLen) {
                maxLen = currLen;
                strcpy(longest, word);  // copy current longest word
            }
            j = 0;          // reset for next word
            currLen = 0;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("The longest word is: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
