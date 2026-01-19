/*Write a C program to print the row number having the maximum sum 
in a given matrix and also print the maximum sum.*/

#include <stdio.h>

int main()
{
    int r, c;

    // 🔹 User se matrix ke rows aur columns lena
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // 🔹 r x c ka 2D array declare karna
    int arr[r][c];

    // 🔹 Matrix ke elements input lena
    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);   // har element input
        }
    }

    int maxSum = 0;     // maximum row sum store karega
    int maxRow = 0;     // jis row ka sum maximum hoga uska index

    // 🔹 Har row ka sum calculate karna
    for(int i = 0; i < r; i++)
    {
        int rowSum = 0;    // har row ke liye sum reset

        for(int j = 0; j < c; j++)
        {
            rowSum += arr[i][j];   // row ke elements ka sum
        }

        // 🔹 Agar current row ka sum zyada hai to update karo
        if(i == 0 || rowSum > maxSum)
        {
            maxSum = rowSum;
            maxRow = i;
        }
    }

    // 🔹 Result print karna
    printf("Row with maximum sum = %d\n", maxRow);
    printf("Maximum sum = %d\n", maxSum);

    return 0;
}
