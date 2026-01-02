//Display this AP - 1,3,5,7,9.. upto ‘n’

#include<stdio.h>
int main()
{
int n;
printf("ENTER THE NUMBER OF N=");
scanf("%d",&n);
int a=1;
for(int i=1;i<=n;i++)
{
    printf("%d  ",a);
    a=a+2;
}


    return 0;
}