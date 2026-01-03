//WAP to check if a number is prime or not using for loop and break statement.

#include<stdio.h>
int main()
{
int n;
printf("ENTER A NUMBER=");
scanf("%d",&n);

int a=0;
for(int i=2;i<=n-1;i++)
if(n%i==0)
{
    a=1;
    break;
}
if(n==1){printf("NO PRIME NO COMPOSITE");}
else if(a==1){printf("GIVEN NUMBER IS COMPOSITE");}
else {printf("GIVEN NUMBER IS PRIME");}


    return 0;
}