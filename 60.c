//Q60 (Arrays (1D))
//Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main()
{
    int n, pos = 0, neg = 0, zero = 0;
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            pos = pos + 1;
        } else if(arr[i] < 0) {
            neg += 1;
        } else {
            zero += 1;
        }
    }
    
    printf("positive = %d , negative = %d, zero = %d", pos, neg, zero);
    return 0;
}
