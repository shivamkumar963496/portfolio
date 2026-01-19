/*Write a C program to input elements of a two-dimensional array using user-defined number of rows and
 columns and display the elements in matrix form using nested loops.*/

#include <stdio.h>   // Standard input-output header file

int main()
{
    int r, c;   // r = number of rows, c = number of columns

    // 🔹 Rows ka input lena
    printf("ENTER ROWS = ");
    scanf("%d", &r);

    // 🔹 Columns ka input lena
    printf("ENTER COLUMNS = ");
    scanf("%d", &c);

    // 🔹 User-defined size ka 2D array declare karna
    int arr[r][c];

    // 🔹 2D array ke elements input lena
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // Row i aur Column j ka element input
            scanf("%d", &arr[i][j]);
        }
    }

    // 🔹 2D array ko matrix form me print karna
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // Current element print karna
            printf("%d  ", arr[i][j]);
        }
        // Har row ke baad new line
        printf("\n");
    }

    return 0;   // Program successful execution
}
