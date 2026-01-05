//wap to count digits of a given number.

#include<stdio.h>
int main()
{
int n;
printf("ENTER A NUMBER=");
scanf("%d",&n);
int count=0;
while(n!=0){
    n=n/10;
    count++;
}
printf("THE NUMBER OF DIGITS=%d",count);


    return 0;
}