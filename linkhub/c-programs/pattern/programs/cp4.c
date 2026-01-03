/*print a star pattern n number of rows and m numbers of columns
*  *  *  *  *
*  *  *  *
*  *  *
*  *
*  
*/

#include <stdio.h>

int main()
{
    int n;

    printf("ENTER ROWS = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n+1-i; j++)
        {
            printf("*  ");
        }
        printf("\n");
    }

    return 0;
}
