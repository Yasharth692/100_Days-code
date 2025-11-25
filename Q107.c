/* Q107 Write a program to take an array arr[] of integers as input, 
the task is to find the previous greater element for each element of 
the array in order of their appearance in the array. Previous greater 
element of an element in the array is the nearest element on the left 
which is greater than the current element. If there does not exist next 
greater of current element, then previous greater element for current 
element is -1.
 */

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
        for (int j = i - 1; j >= 0; j--) {  
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
    
    return 0;
}


