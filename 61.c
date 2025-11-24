// Q61 (Arrays (1D))
// Search for an element in an array using linear search.
#include <stdio.h>
int main(){
    int n, target, found = 0, position = -1;
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &target);
    for(int i = 0; i < n; i++) {
        if(a[i] == target) {
            found = 1;
            position = i;
            break; 
        }
    }
    
    if(found) {
        printf("Found at index %d\n", position);
    } else {
        printf("-1\n");
    }
    
