/* Q106: Write a program to take an array arr[] of integers as input.
   The task is to find the next greater element for each element of the array
   in order of their appearance. If no such element exists, return -1. */

#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);

    int a[n], nxt[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                nxt[i] = a[j];
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            nxt[i] = -1;
        }
    }

    printf("Next greater elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", nxt[i]);
    }
    printf("\n");
    printf("\nExplanation:\n");
    for (int i = 0; i < n; i++) {
        printf("The next greater element to %d is ", a[i]);
        if (nxt[i] == -1)
            printf("-1 (no greater element to the right).\n");
        else
            printf("%d.\n", nxt[i]);
    }
    return 0;
}
