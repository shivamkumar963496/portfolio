//Write a program to find the value of one
//number raised to the power of another.

#include<stdio.h>
int main()
{
int a,b;
printf("ENTER THE BASE=");
scanf("%d",&a);
printf("ENTER THE POWER=");
scanf("%d",&b);

int power=1;
for(int i=1;i<=b;i++){
    power=power*a;
}
printf("%d ki power %d = %d",a,b,power);


    return 0;
}