//WAP TO CALCUTE THE AREA OF A SQURE AND RACTANGLE
#include<stdio.h>
int main()
{
int l,b,s,squre_area,rectangle_area;
printf("ENTER THE VALUE OF L=");
scanf("%d",&l);
printf("ENTER THE VALUE OF B=");
scanf("%d",&b);
printf("ENTER THE VALUE OF S=");
scanf("%d",&s);
squre_area=l*b;
rectangle_area=s*s;
printf(" THE AREA OF THE SQURE=%d",squre_area);
printf(" \nTHE AREA OF THE RECTANGLE=%d",rectangle_area);


    return 0;
}