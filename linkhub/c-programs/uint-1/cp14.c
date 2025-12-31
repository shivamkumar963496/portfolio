//Take integer input and print the absolute value of that integer

#include<stdio.h>
int main()
{
int n;
printf("ENTER A NUMBER=");
scanf("%d",&n);
if (n<0)
{
n=n*(-1);
}
printf("THE ABSOLUTE VALUE OF GIVEN NUMBER=%d",n);


    return 0;
}