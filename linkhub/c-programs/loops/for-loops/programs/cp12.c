//WAP to print od numbers from 1 to 100 using for loop and continue statement.

#include<stdio.h>
int main()
{
for(int i=1;i<=100;i++)
{
    if(i%2==0){
        continue;
    }
    printf("%d ",i);
}



    return 0;
}