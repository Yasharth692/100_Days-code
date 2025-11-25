#include <stdio.h>

int main() {
    int n, k;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    printf("Enter subarray size k: ");
    scanf("%d", &k);

    // Edge case: if k > n, no valid subarray
    if (k > n || k <= 0) {
        printf("Invalid value of k\n");
        return 0;
    }

    // Step 1: Find sum of first window of size k
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Step 2: Slide the window from index k to n-1
    for (int i = k; i < n; i++) {
        windowSum += arr[i];        // add new element
        windowSum -= arr[i - k];    // remove element going out of window

        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    printf("Maximum sum of all subarrays of size %d is: %d\n", k, maxSum);

    return 0;
}
