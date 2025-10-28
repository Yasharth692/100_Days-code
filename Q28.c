#include<stdio.h>
int main() {
    int n,i,product=1;
    printf("enter a number");
    scanf("%d",&n);

    for(i=2; i<=n; i++){
        if(i % 2 == 0){
            product = product*i;
        }
    }
    printf("product of %d even number = %d\n",n,product);
    return 0;
}