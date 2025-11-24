// Q66: Insert element in sorted array at appropriate position

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    int n, element;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &element);
    
    int i = n - 1;
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = element;
    
    for (int j = 0; j <= n; j++) {
        printf("%d", arr[j]);
        if (j < n) printf(" ");
    }
    printf("\n");
    
    return 0;
}
