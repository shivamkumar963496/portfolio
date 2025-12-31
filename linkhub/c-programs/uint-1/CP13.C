//Any year is input through the keyboard. Writea program to determine whether
// the year is a leapyear or not.
// (Considering leap year occurs afterevery 4 years)


#include<stdio.h>
int main()
{
int year;
printf("ENTER A YEAR=");
scanf("%d",&year);
if(year%4==0)
{
    printf("YEAR IS A LEAP YEAR");
}
else{
    printf("YEAR IS NOT A LEAP YEAR");
}



    return 0;

}