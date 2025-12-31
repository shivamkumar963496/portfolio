//Ques : Take input percentage of a student and print the Grade according to marks:

/*
1) 91-100 A
2) 81-90 B
3) 71-80 C
4) 61-70 D
*/
#include<stdio.h>
int main()
{
int n;
printf("ENTER THE PERSANTAGE=");
scanf("%d",&n);

if(n>91)
{
    printf("A GRADE");
}

else if(n>81)
{
printf("B GRADE");
}

else if(n>71)
{
    printf("C GRADE");
}
else
{
    printf("D GRADE");
}
return 0;
}