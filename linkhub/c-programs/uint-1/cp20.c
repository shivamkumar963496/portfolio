//Take 3 positive integers input and print the greatest of them. all 3 are distinct
#include<stdio.h>
int main()
{
int a,b,c;
printf("ENTER THE VALUE OF A=");
scanf("%d",&a);

printf("ENTER THE VALUE OF B=");
scanf("%d",&b);

printf("ENTER THE VALUE OF C=");
scanf("%d",&c);

if(a>b && a>c)
{
    printf("A IS GRETEST");
}

if(b>a && b>c)
{
    printf("B IS GRETEST");
}

if(c>a && c>b)
{
    printf("C IS GRETEST");
}

    return 0;
}