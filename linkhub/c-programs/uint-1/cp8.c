// WAP TO CALCUTE THE SIMPLE INTREST AND TOTAL AMOUNT WITH INTERST
#include<stdio.h>
int main()
{
int mul,dar,time,si,total;
printf("ENTER THE MULDHAN=");
scanf("%d",&mul);
printf("\nENTER THE DAR=");
scanf("%d",&dar);
printf("\nENTER THE TIME=");
scanf("%d",&time);
si=(mul*dar*time)/100;
total=mul+si;
printf("\nYOUR SIMPLE INTERST=%d",si);
printf("\nYOUR TOTAL AMOUNT WITH INTERST=%d",total);




    return 0;
}