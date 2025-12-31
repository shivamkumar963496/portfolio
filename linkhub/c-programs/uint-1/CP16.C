//write a program to find whether the area of the rectangle is greater than its perimeter.
#include<stdio.h>
int main()
{
    int l,b;
    printf("ENTER THE VALUE OF L=");
    scanf("%d",&l);
    printf("ENTER THE VALUE OF B=");
    scanf("%d",&b);
    int area=l*b;
    int pera=(l+b)*2;
    printf("\nTHE AREA=%d",area);
    printf("\nTHE PERA=%d",pera);
    if (area>pera)
    {
        printf("\nAREA IS GRETER THEN PERA");
    }
    else{
        printf("\nAREA IS NOT GRETER THEN PERA");
    }
    if (area==pera)
    {
        printf("AREA IS = PERA");
    }
    
    
    
    
    return 0;
}