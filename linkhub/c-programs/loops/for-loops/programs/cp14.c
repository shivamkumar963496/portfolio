//print the factorial of a given number

#include<stdio.h>
int main()
{
int n;
printf("ENTER A NUMBER=");
scanf("%d",&n);
int factorial=1;
for(int i=1;i<=n;i++){
factorial=factorial*i;
}
printf("THE FACTORIAL OF GIVEN NUMBER=%d",factorial);

    return 0;
}