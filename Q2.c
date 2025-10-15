#include<stdio.h>
int main () {
int x,y,sum,difference,product,quotient;
printf("enter x");
scanf("%d",&x);

printf("enter y");
scanf("%d",&y);

sum = x+y;
difference = x-y;
product = x*y;
quotient = x/y;

printf("sum is %d\n",sum);
printf("difference is %d\n",difference);
printf("product is %d\n",product);
printf("quotient is %d\n",quotient);

return 0;
}