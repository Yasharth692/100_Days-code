#include<stdio.h>
int main(){
    int n,i,sum = 0;
    printf("enter a number");
    scanf("%d",&n);
    
    for(i = 1; i<=2*n; i++){
        if(i %2 != 0){
            sum = sum + i;
        }
    }
    printf("sum of first %d odd no:%d\n",n,sum);
    return 0;
}