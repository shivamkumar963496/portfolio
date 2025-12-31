//Take 3 numbers input and tell if they can be the sides of a triangle.
#include<stdio.h>
int main()
{
int a,b,c;
printf("ENTER THE 1ST SIDE=");
scanf("%d",&a);

printf("ENTER THE 2ND SIDE=");
scanf("%d",&b);

printf("ENTER THE 3RD SIDE=");
scanf("%d",&c);

if((a+b)>c &&(b+c)>a && (c+a)>b)
{
    printf("\nVALID TRANGLE");
}
else{
    printf("\nINVALID TRANGLE");
}


    return 0;
}