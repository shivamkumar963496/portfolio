//Ques :Print the factorials of first ‘n’ numbers.

#include<stdio.h>
int main()
{
int n,factorial=1;
printf("ENTER A NUMBER=");
scanf("%d",&n);

for (int i=1; i <=n; i++)
{
    factorial=factorial*i;
    printf(" FACTORIAL OF %d = %d\n",i,factorial);

}



    return 0;
}