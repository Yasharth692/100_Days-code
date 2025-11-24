#include <stdio.h>
#include <string.h>

void print_initials_and_surname(char name[]) {
    int i = 0;
    int length = strlen(name);
    
    // Print the first character of the first name
    printf("%c", name[0]);
    
    // Loop through the string to find spaces (between names)
    for (i = 1; i < length; i++) {
        if (name[i] == ' ' && name[i+1] != ' ') {
            // Print the first character of each name after a space
            printf("%c", name[i + 1]);
        }
    }
    
    // Find the surname (last part of the name)
    char *surname = strrchr(name, ' ') + 1; // Get the last part after the last space
    printf(" %s\n", surname); // Print the surname in full
}

int main() {
    char name[100];
    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);  // Get the name from user input
    
    // Remove the newline character if present
    name[strcspn(name, "\n")] = '\0';
    
    print_initials_and_surname(name);
    
    return 0;
}
