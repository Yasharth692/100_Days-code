#include <stdio.h>

int main() {
    char str[] = "stress";
    int count[26] = {0};
    int i;
    char firstRepeating = '\0';

    for(i = 0; str[i] != '\0'; i++) {
        count[str[i] - 'a']++;
    }

    for(i = 0; str[i] != '\0'; i++) {
        if(count[str[i] - 'a'] > 1) {
            firstRepeating = str[i];
            break;
        }
    }

    if(firstRepeating != '\0') {
        printf("%c\n", firstRepeating);  // Output: s
    } else {
        printf("No repeating character\n");
    }

    return 0;
}
