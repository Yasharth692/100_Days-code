// Rotate an array to the right by k positions.

#include <stdio.h>

// function to reverse part of array
void reverse(int arr[], int start, int end) {
    int temp;
    while(start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;  // in case k > n

    // reverse the whole array
    reverse(arr, 0, n-1);
    // reverse first k elements
    reverse(arr, 0, k-1);
    // reverse remaining n-k elements
    reverse(arr, k, n-1);

    // print rotated array
    printf("Array after right rotation by %d positions:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
