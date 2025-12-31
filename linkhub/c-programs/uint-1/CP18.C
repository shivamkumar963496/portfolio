//Take positive integer input and tell if it is divisible by 5 and 3.


#include<stdio.h>
int main()
{
int n;
printf("ENTER A NUMBER=");
scanf("%d",&n);
if(n%5==0 && n%3==0)
{
    printf("number is divisible by 3 and 5");
}
else{
    printf("number is not divisible by 3 and 5");
}


    return 0;
}