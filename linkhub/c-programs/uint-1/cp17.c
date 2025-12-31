//Take positive integer input and tell if it is a three digit number or not.

#include<stdio.h>
int main()
{
int n;
printf("ENTER A NUMBER=");
scanf("%d",&n);
if(n>99 && n<1000)
{
    printf("IT IS A THREE DIGIT NUMBER");
}
else{
    printf("IT IS NOT A THREE DIGIT NUMBER");
}


    return 0;
}