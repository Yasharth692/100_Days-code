//Count vowels and consonants in a string.

#include <stdio.h>
#include <ctype.h>   // for tolower()

int main() {
    char str[200];          // string input
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // take input (with spaces)

    // loop through the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);   // make lowercase (so 'A' and 'a' are same)

        if (ch >= 'a' && ch <= 'z') {   // check if it is a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;              // if vowel
            } else {
                consonants++;          // otherwise consonant
            }
        }
    }

    // show results
    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}
