#include<stdio.h>
int main () {
    int a,b,c;
    printf("enter first side\n");
    scanf("%d",&a);
    printf("enter second side\n");
    scanf("%d",&b);
    printf("enter third side\n");
    scanf("%d",&c);

    if(a == b && a == c){
        printf("Equilateral triangle\n");
    }else if(a == b || b==c || c==a){
        printf("Isocelse triangle\n");
    }else{
        printf("Scalene triangle\n");
    }
    return 0;
}