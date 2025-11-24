/* 
Q62 (Arrays (1D))
Reverse an array without taking extra space.
*/
#include <stdio.h>
int main(){
    int n, target, found = 0, position = -1;
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
     for(int i = 0; i < n/2; i++) {
        int temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
    for(int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if(i < n-1) printf(" ");
    }
    printf("\n");

    
    return 0;
}
