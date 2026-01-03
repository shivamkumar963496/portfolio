// print alphabet square
/*
A B C D
A B C D
A B C D
*/

#include <stdio.h>
int main()
{
    int n, m;
    printf("ENTER THE NUMBER OF ROWS=");
    scanf("%d", &n);
    printf("ENTER THE NUMBER OF COLU=");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        int a = 65;
        for (int j = 1; j <= m; j++)
        {
            printf("%c  ", a);
            a++;
        }
        printf("\n");
    }

    return 0;
}