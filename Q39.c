#include <stdio.h>

int main() {
    int n, digit;
    int product = 1;
    int foundOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;        // get last digit

        if (digit % 2 == 1) {  // check if odd
            product *= digit;  // multiply
            foundOdd = 1;
        }

        n = n / 10;            // remove last digit
    }

    if (foundOdd)
        printf("Product of odd digits = %d", product);
    else
        printf("No odd digits found");

    return 0;
}
