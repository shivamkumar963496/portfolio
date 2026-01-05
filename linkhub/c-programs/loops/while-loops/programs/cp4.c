////Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms using while loop.

#include<stdio.h>
int main()
{
int n;
printf("ENTER THE NUMBER OF N=");
scanf("%d",&n);
int i=1;
int a=1;
while(i<=n){
    printf("%d ",a);
    i++;
    a=a*2;
}



    return 0;
}