//Display this GP - 100,50,25,.. upto ‘n’ terms.
//Display this GP - a to n  terms. modify by me

#include<stdio.h>
int main()
{
    int n;
    float a;

    printf("ENTER THE VALUE OF a = ");
    scanf("%f",&a);

    printf("ENTER THE VALUE OF N = ");
    scanf("%d",&n);

for(int i=1;i<=n;i++)
{
    printf("%.2f  ",a);
    a=a/2;
}


    return 0;
}