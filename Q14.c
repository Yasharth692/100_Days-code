#include<stdio.h>
int main () {
char ch;
printf("enter a alphabet");
scanf("%c",&ch);

if (ch =='a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u') {
    printf("%cis a vowel\n",ch);
}
else if (ch >='a'&& ch<='z') {
         printf("%c is a constant\n",ch);
}
else {
    printf("invalid alphabet");
}
    return 0;
} 