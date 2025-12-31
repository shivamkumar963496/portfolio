//WAP TO CALCULATE THE PERAMETER OF A RACTANGLE,SQURE,CIRCLE 
#include<stdio.h>
int main()
{
int l,b,s,r;
int p1,p2;
float p3;
printf("ENTER THE VALUE OF L=");
scanf("%d",&l);
printf("ENTER THE VALUE OF B=");
scanf("%d",&b);
printf("ENTER THE VALUE OF S=");
scanf("%d",&s);
printf("ENTER THE VALUE OF R=");
scanf("%d",&r);
p1=(l+b)*2;
p2=s*4;
p3=2*3.1415*r;
printf(" \n\nthe perameter of the rectangle=%d",p1);
printf(" \n\nthe perameter of the square=%d",p2);
printf(" \n\nthe perameter of the circle=%.3f",p3);



    return 0;
}