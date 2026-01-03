//Print all the even numbers from 1 to n

#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF N=");
    scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    if(i%2==0)
printf("%d   ",i);
}

    return 0;
}