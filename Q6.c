#include<stdio.h>
int main () {
int a,b,temp;
printf("enter first number");
scanf ("%d",&a);

printf("enter second number");
scanf("%d",&b);

temp=a;
a=b;
b=temp;
printf("after swaping :a=%d, b=%d\n",a,b);
return 0;
}