#include <stdio.h>
#include <string.h>

void print_initials(char name[]) {
    // Print the first character of the first name
    printf("%c", name[0]);
    
    // Loop through the string to find spaces (between names)
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            // Print the first character of each name after a space
            printf("%c", name[i + 1]);
        }
    }
    printf("\n");
}

int main() {
    char name[100];
    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);  // Get the name from user input
    
    // Remove the newline character if present
    name[strcspn(name, "\n")] = '\0';
    
    print_initials(name);
    
    return 0;
}
