//Take float input and print the fractional part
of the real number.
#include<stdio.h>
int main()
{
float a,m;
int b;
printf("ENTER THE VALUE OF A=");
scanf("%f",&a);
b=(int)a;
m =a-b;

printf("%f",m);



    return 0;
}