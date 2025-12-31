//WRITE A PROGRAM TO CALCUTE THE MODE OF TWO NUMBERS BOTH NUMBERS ENTER BY THE USER

#include<stdio.h>
int main()
{
int a,b,m;
printf("NETER THE VALUE OF A=");
scanf("%d",&a);
printf("\n\nENTER THE VALUE OF B=");
scanf("%d",&b);
m=a%b;
printf("\n\nTHE VALUE OF %d mode %d  =  %d",a,b,m);

    return 0;
}