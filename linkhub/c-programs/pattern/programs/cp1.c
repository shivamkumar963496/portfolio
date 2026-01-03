/*print a star pattern n number of rows and m numbers of columns
********
********
********
*/

#include <stdio.h>

int main()
{
    int n, m;

    printf("ENTER ROWS = ");
    scanf("%d", &n);

    printf("ENTER COLUMNS = ");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("*   ");
        }
        printf("\n\n");
    }

    return 0;
}
