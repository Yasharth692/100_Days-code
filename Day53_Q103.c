#include <stdio.h>

int main() {
    int arr[100], n;
    int totalSum = 0, leftSum = 0, pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];  // calculate total sum
    }

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            pivot = i;
            break;  // stop at the first (leftmost) pivot
        }

        leftSum += arr[i];
    }

    if (pivot != -1)
        printf("Pivot index = %d\n", pivot);
    else
        printf("-1\n");

    return 0;
}
