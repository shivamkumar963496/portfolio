//print the table of any number

#include<stdio.h>
int main()
{
int n;
printf("ENTER ANY NUMBER=");
scanf("%d",&n);

for(int i=n;i<=(n*10);i=i+n)
printf("%d  ",i);


    return 0;
} 