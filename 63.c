/*Q63 (Arrays (1D))
Merge two arrays.*/
#include <stdio.h>

int main()
{
    int n, m, k;
  
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
  
    scanf("%d", &m);
    int b[m];  
    printf("Enter %d elements: ", m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    
    
    k = n + m; 
    int merged[k];
    
    for(int i = 0; i < n; i++) {
        merged[i] = a[i];
    }
    
    for(int i = 0; i < m; i++) {
        merged[n + i] = b[i];
    }
    
    printf("Merged array: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}
