/*Write a C program to input a matrix of order r × c and 
find the maximum and minimum elements present in the matrix.*/



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

    // 🔹 Pehle element ko hi max aur min maan liya
    int max = arr[0][0];
    int min = arr[0][0];

    // 🔹 Max aur Min find karna
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // Agar current element max se bada hai to max update karo
            if (arr[i][j] > max)
                max = arr[i][j];

            // Agar current element min se chhota hai to min update karo
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }

    // 🔹 Final result print karna
    printf("\nTHE MAXIMUM ELEMENT OF THE ARRAY = %d \n", max);
    printf("THE MINIMUM ELEMENT OF THE ARRAY = %d", min);

    return 0;
}
