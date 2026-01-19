
/*Write a C program to read elements of a two-dimensional array of user-defined size (rows and columns) 
and display the elements in matrix form using nested loops.*/

#include <stdio.h>   // Input–Output functions ke liye

int main()
{
    int r, c;   // r = rows, c = columns

    // 🔹 Rows ka input lena
    printf("ENTER NUMBER OF ROWS = ");
    scanf("%d", &r);

    // 🔹 Columns ka input lena
    printf("ENTER NUMBER OF COLUMNS = ");
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
        // Har row ke baad new line (input ko readable banane ke liye)
        printf("\n");
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

    return 0;   // Program successful
}
