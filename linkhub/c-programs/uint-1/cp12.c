//Take positive integer input and tell if it is divisible by 5 or not.

#include<stdio.h>
int main()
{
int x;
printf("ENTER A NUMBER");
scanf("%d",&x);
if(x%5==0)
{
    printf("NUMBER IS DIVISIBLE BY 5");
}
else
{
printf("NUMBER IS NOT DIVISIBLE BY 5");
}



    return 0;
}