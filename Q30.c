#include<stdio.h>
int main() {
    int n,i,revr = 0,digit;
    printf("enter a number");
    scanf("%d",&n);

    for(;n>0;n=n/10){
        digit = n%10;
        revr = revr*10+digit;
    }
    printf("reverse of %d number = %d\n",n,revr);
    return 0;
}