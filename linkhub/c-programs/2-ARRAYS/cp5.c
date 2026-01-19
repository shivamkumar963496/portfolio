/*Write a C program to input a matrix of order 
r × c and calculate the sum of all its elements*/


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

    // 🔹 Sum ko 0 se initialize karna
    int sum = 0;

    // 🔹 Sabhi elements ka sum nikalna
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            sum += arr[i][j];   // har element ko sum me add kar rahe hain
    }

    // 🔹 Final sum print karna
    printf("\nTHE SUM OF GIVEN MATRIX = %d", sum);

    return 0;
}
