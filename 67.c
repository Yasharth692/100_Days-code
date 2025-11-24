 // Q67: Insert element at given position
#include <stdio.h>

int main() {
   
    int n, pos, element;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &pos, &element);

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;

    for (int i = 0; i <= n; i++) {
        printf("%d", arr[i]);
        if (i < n) printf(" ");
    }
    printf("\n");
    
    return 0;
}
