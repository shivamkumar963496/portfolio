//If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.

#include<stdio.h>
int main()
{
int ram,shyam,ajay;
printf("ENTER THE RAM AGE=");
scanf("%d",&ram);

printf("ENTER THE SHYAM AGE=");
scanf("%d",&shyam);

printf("ENTER THE AJAY AGE=");
scanf("%d",&ajay);
if(ram>shyam && ram>ajay)
{
    printf("RAM IS YOUNGEST");
}
if (shyam>ram && shyam>ajay)
{
    printf("SHYAM IS YOUNGEST");
}
if (ajay>ram && ajay>shyam)
{
    printf("AJAY IS YOUNGEST");
}





    return 0;
}