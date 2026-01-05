//wap to print reverse number of a given number.

#include<stdio.h>
int main()
{
int n;
printf("ENTER A NUMBER=");
scanf("%d",&n);
int r=0;
while(n>0){
    int ld=n%10;
    r=r+ld;
    r=r*10;
    n=n/10;
}
r=r/10;
printf("REVERSE NUMBER=%d",r);

    return 0;
}