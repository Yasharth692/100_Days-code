#include<stdio.h>
int main () {
char ch;
printf("enter a alphabet");
scanf("%c",&ch);

if(ch >= 'A' && ch<= 'Z') {
    printf("%c is a Uppercase Alphabet\n",ch);
}
else if(ch >= 'a' && ch <='z') {
    printf("%c is a lowercase alphabet\n",ch);
}
else if(ch>='1' && ch<='9') {
    printf(" %c is a digit\n",ch);
}
else{
    printf("%c is a specific character\n",ch);
}
return 0;
}