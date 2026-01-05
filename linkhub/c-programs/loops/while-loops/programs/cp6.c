//wap to print sum of a given number.

#include<stdio.h>
int main()
{
int n;
printf("ENTER A NUMBER=");
scanf("%d",&n);
int sum=0;
int ld;
while(n!=0){
    ld=n%10;
    sum=sum+ld;
    n=n/10;
    
}
printf("SUM OF DIGITS = %d",sum);

    return 0;
}