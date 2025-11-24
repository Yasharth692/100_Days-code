// Find the second largest element in an array.

#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0], secondLargest = -2147483648; // minimum int

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -2147483648) {
        printf("Second largest element does not exist.\n");
    } else {
        printf("Second largest element = %d\n", secondLargest);
    }

    return 0;
}


