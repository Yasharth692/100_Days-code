#include<stdio.h>
int main() {
int seconds,hours,minutes;
printf("enter seconds");
scanf("%d",&seconds);

hours = seconds/3600;
minutes = (seconds%3600)/60;
seconds = seconds%60;

printf("after converting:hours=%d,minutes=%d,seconds=%d\n",hours,minutes,seconds);
return 0;
}