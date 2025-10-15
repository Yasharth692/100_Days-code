#include<stdio.h>
int main() {
int a,b;
printf("enter first number");
scanf("%d",&a);

printf("enter second number");
scanf("%d",&b);

a=a+b;
b=a-b;
a=b-a;
printf("after swaping:a=%d,b=%d\n",a,b);
return 0;
}