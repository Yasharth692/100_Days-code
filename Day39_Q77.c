// Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int n, i, j, k, flag = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // input matrix
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // check distinct diagonal elements
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }

    if(flag) {
        printf("Diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are NOT distinct.\n");
    }

    return 0;
}
