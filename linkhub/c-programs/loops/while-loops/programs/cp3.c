//User se number lekar uska table print karo

#include<stdio.h>
int main()
{
int n;
printf("ENTER A NUMBER=");
scanf("%d",&n);
int i=n;
while (i<=(n*10))
{
    printf("%d ",i);
    i=i+n;
}


    return 0;
}