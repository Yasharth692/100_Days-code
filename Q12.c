#include<stdio.h>
int main () {
int n ;
printf("enter a number");
scanf("%d",&n);

if(n>0) {
    printf("postive");
}
 else if(n<0) {
    printf("negative");
}
else {
    printf("zero");
}
return 0;
}