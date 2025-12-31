//WRITE A PROGRAM TO CALCUTE THE SUM,SUB MUL,DIV OF TWO NUMBERS

#include<stdio.h>
int main()
{
int a,b,sum,sub,mul,div;
printf("ENTER THE VALUE OF A=");
scanf("%d",&a);
printf("ENTER THE VALUE OF B=");
scanf("%d",&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("SUM=%d",sum);
printf("\nSUB=%d",sub);
printf("\nMUL=%d",mul);
printf("\nDIV=%d",div);


    return 0;
}