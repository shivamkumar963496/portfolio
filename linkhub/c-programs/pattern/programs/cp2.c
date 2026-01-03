/*print a number pattern n number of rows and m numbers of columns
12345
12345
12345
12345
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
            printf("%d  ", j);
        }
        printf("\n");
    }

    return 0;
}
