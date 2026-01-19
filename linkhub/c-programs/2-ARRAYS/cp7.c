/*Write a C program to input a 2D array and display the 
largest and smallest elements with their positions.*/



#include <stdio.h>
int main()
{
    int r, c;

    // 🔹 Rows input lena
    printf("ENTER NUMBER OF ROWS = ");
    scanf("%d", &r);

    // 🔹 Columns input lena
    printf("ENTER NUMBER OF COLUMNS = ");
    scanf("%d", &c);

    // 🔹 r x c ka 2D array banana
    int arr[r][c];

    // 🔹 Matrix ke elements input lena
    printf("ENTER ELEMENTS OF MATRIX:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    }

    // 🔹 Matrix print karna
    printf("\nMATRIX IS:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    // 🔹 Pehle element ko max aur min maan liya
    int max = arr[0][0];
    int min = arr[0][0];

    // 🔹 Max aur Min ke index initialize karna
    int maxrow = 0, maxcol = 0;
    int minrow = 0, mincol = 0;

    // 🔹 Max, Min aur unke index find karna
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // Agar current element max se bada ho
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                maxrow = i;
                maxcol = j;
            }

            // Agar current element min se chhota ho
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                minrow = i;
                mincol = j;
            }
        }
    }

    // 🔹 Final result print karna
    printf("\nMAX ELEMENT = %d at index (%d, %d)", max, maxrow, maxcol);
    printf("\nMIN ELEMENT = %d at index (%d, %d)", min, minrow, mincol);

    return 0;
}
