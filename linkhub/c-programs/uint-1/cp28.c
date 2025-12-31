//Ques : Print the factorial of a given number ‘n’.

#include<stdio.h>
int main()
{
int n,factorial=1;
printf("ENTER A NUMBER=");
scanf("%d",&n);

for (int i=1; i <=n; i++)
{
    factorial=factorial*i;
}
printf(" FACTORIAL = %d",factorial);



    return 0;
}