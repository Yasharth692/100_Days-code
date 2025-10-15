#include<stdio.h>
#include<math.h>
int main() {
float principle,rate,time,simpleinterest,compoundinterset;
printf("enter principle");
scanf("%f",&principle);
printf("enter rate");
scanf("%f",&rate);
printf("enter time");
scanf("%f",&time);

printf("simpleinterest is %f",principle*rate*time/100);
printf("compoundinterest is %f",principle*pow((1+rate/100),time)-principle);
return 0;
}