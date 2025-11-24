/*
Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number.*/


#include <stdio.h>
int main()
{
    int num;
    int count[10] = {0};
    int temp, digit;
    int max_count = 0, most_frequent = 0;
    
    scanf("%d", &num);
    temp = num;
    
    if (temp < 0) {
        temp = -temp;
    }
    
    if (temp == 0) {
        count[0] = 1;
    }
    
    while (temp > 0) {
        digit = temp % 10;
        count[digit]++;
        temp = temp / 10;
    }
    
    for (int i = 0; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            most_frequent = i;
        }
    }
    
    printf("%d", most_frequent);
    
    return 0;
}
