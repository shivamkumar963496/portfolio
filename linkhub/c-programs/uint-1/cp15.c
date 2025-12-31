//write a program to determine whether the seller has made profit or incurred loss.

#include<stdio.h>
int main()
{
int cp,sp;
printf("ENTER THE VALUE OF CP=");
scanf("%d",&cp);
printf("ENTER THE VALUE OF SP=");
scanf("%d",&sp);

if (sp==cp)
{
    printf("NO PROFIT NO LOOS");
}
else if(sp>cp)
{
    printf("PROFIT");
}
else
{
    printf("LOOS");
}

    return 0;
}
