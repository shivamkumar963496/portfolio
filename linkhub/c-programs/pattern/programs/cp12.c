/*print thi pattern
 * * * * * * *
 *           *
 *           *
 *           *
 * * * * * * *
 */

#include <stdio.h>
int main()
{
    int rows, colu;
    printf("ENTER THE NUMBER OF ROWS=");
    scanf("%d", &rows);

    printf("ENTER THE NUMBER OF COLUMN=");
    scanf("%d", &colu);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= colu; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == colu)
                printf("*  ");
            else
                printf("   ");
        }
        printf("\n");
    }

    return 0;
}