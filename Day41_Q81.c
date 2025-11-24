//Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    int n, m, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    int matrix[n][m];

    // input
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    // First half diagonals (starting from first row)
    for(int k = 0; k < m; k++) {
        i = 0;
        j = k;
        while(i < n && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Second half diagonals (starting from last column downwards)
    for(int k = 1; k < n; k++) {
        i = k;
        j = m - 1;
        while(i < n && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
