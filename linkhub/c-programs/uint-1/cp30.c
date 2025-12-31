#include<stdio.h>
int main()
{
int n;
int a=0,b=1,c;
printf("ENTER A NUMBER = ");
scanf(" Fibonacci number = %d  ", &n);

if (n==1)
     printf("Fibonacci number = %d   ",a);

else if (n==2)
    printf("Fibonacci number =  %d   ",b);
    
 else{
    for (int i = 3; i <=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
    
 }   




    return 0;
}