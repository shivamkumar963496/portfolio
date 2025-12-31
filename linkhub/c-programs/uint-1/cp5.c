// WAP TO CALCULATE THE PERSANTAGE OF A STUDENT FIVE SUBJECT 
#include <stdio.h>
int main ()
{
int s1,s2,s3,s4,s5,total,persantage;
printf("ENTER THE NUMBER OF S1=");
scanf("%d",&s1);
printf("ENTER THE NUMBER OF S2=");
scanf("%d",&s2);
printf("ENTER THE NUMBER OF S3=");
scanf("%d",&s3);
printf("ENTER THE NUMBER OF S4=");
scanf("%d",&s4);
printf("ENTER THE NUMBER OF S5=");
scanf("%d",&s5);
total=s1+s2+s3+s4+s5;
persantage=total/5;
printf("\nyour total marks=%d",total);
printf("\n\nyour persantage=%d",persantage);


    return 0;
}