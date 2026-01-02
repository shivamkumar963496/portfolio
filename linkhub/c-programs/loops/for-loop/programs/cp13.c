//print the factorial of 1st n numbers

#include<stdio.h>
int main()
{
int n;
printf("ENTER A NUMBER=");
scanf("%d",&n);
int factorial=1;
for(int i=1;i<=n;i++){
factorial=factorial*i;
printf("THE FACTORIAL IS =%d\n",factorial);
}


    return 0;
}