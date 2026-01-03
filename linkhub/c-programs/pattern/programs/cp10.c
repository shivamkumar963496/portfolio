/*print the given triangle
A
1 2
A B C
1 2 3 4
*/

#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF ROWS=");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
        }

        else
        {
            int a = 65;
            for (int j = 1; j <= i; j++)
            {
                printf("%c", a);
                a++;
            }
        }
        printf("\n");
    }

    return 0;
}