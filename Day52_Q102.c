#include <stdio.h>

int main() {
    int arr[100], n, x;
    int low, high, mid, result = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of x: ");
    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;     // possible ceil
            high = mid - 1;   // try to find smaller valid one
        } else {
            low = mid + 1;
        }
    }

    if (result != -1)
        printf("Ceil of %d is %d at index %d\n", x, arr[result], result);
    else
        printf("-1\n");

    return 0;
}
