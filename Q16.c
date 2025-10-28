#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter first no\n");
    scanf("%d",&a);
    printf("enter second no\n");
    scanf("%d",&b);
    printf("enter third no\n");
    scanf("%d",&c);

    if(a>=b && a>=c){
        printf("%d is largest",a);
    }
    else if(b>=a && b>=c){
        printf("%d is largest",b);
    }
    else{
        printf("%d is largest",c);
    }
    return 0;

}