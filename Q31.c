#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int binary[32]; 
    int i = 0;

    if(n == 0) {
        printf("Binary: 0");
        return 0;
    }

    while(n > 0) {
        binary[i] = n % 2;  
        n = n / 2;          
        i++;
    }

    printf("Binary: ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);  
    }

    return 0;
}
