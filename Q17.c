#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,d,root1,root2;
    printf("enter coffiecent a,b and c\n");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b-4*a*c;
    if(d>0){
        root1 = (-b+sqrt(d))/(2*a);
        root2 = (-b-sqrt(d))/(2*a);
        printf(" roots are real and distinct\n");
        printf("Root1=%.2f\nRoot2=%.2f\n",root1,root2);
    }else if(d==0){
        root1 = root2 = -b/(2*a);
        printf(" roots are real and equal\n");
        printf("Root1=Root2=%.2f\n",root1,root2);
    }else{
        printf("roots are imaginary");
    }
    return 0;
}