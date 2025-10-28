#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    // Input number of units consumed
    printf("Enter units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on slabs
    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    // Display total bill
    printf("Total Electricity Bill = ₹%.2f\n", bill);

    return 0;
}
