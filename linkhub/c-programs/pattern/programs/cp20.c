/*print this pattern
            A
        A   B
    A   B   C
A   B   C   D

*/

#include <stdio.h>
int main()
{
    int n;
    printf("ENTER NUMBER OF LINES=");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {        
        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        int a=65;
        for (int k = 1; k <= i; k++)
        {
            printf("%c  ",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}