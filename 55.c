#include <stdio.h>
// Q55: Print all prime numbers from 1 to n
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(int i = 2; i <= n; i++) {
        int flag = 1;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }
        }
        if(flag) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
