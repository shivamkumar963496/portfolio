/* Ques : Given three points (x1, y1), (x2, y2) and
(x3, y3), write a program to check if all the three
points fall on one straight line. */


#include<stdio.h>
int main()
{
float x1,x2,x3,y1,y2,y3,m1,m2;
printf("ENTER THE POINT X1=");
scanf("%f",&x1);

printf("ENTER THE POINT y1=");
scanf("%f",&y1);

printf("ENTER THE POINT X2=");
scanf("%f",&x2);

printf("ENTER THE POINT y2=");
scanf("%f",&y2);

printf("ENTER THE POINT x3=");
scanf("%f",&x3);

printf("ENTER THE POINT y3=");
scanf("%f",&y3);

m1=(y2-y1)/(x2-x1);
m2=(y3-y2)/(x3-x2);

if(m1==m2)
{
    printf("one straight line");
}


    return 0;
}
