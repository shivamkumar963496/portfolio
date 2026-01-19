/*The rectangle is defined by its top-left 
corner (r1, c1) and bottom-right corner (r2, c2).*/


#include <stdio.h>

int main()
{
    int r, c;

    // 🔹 User se number of rows lena
    printf("ENTER NUMBER OF ROWS = ");
    scanf("%d", &r);

    // 🔹 User se number of columns lena
    printf("ENTER NUMBER OF COLUMNS = ");
    scanf("%d", &c);

    // 🔹 r x c ka 2D array declare karna
    int arr[r][c];

    // 🔹 Matrix ke elements user se input lena
    printf("ENTER ELEMENTS OF MATRIX:\n");
    for (int i = 0; i < r; i++)          // rows ke liye loop
    {
        for (int j = 0; j < c; j++)      // columns ke liye loop
        {
            scanf("%d", &arr[i][j]);    // har cell ka value input
        }
    }

    // 🔹 Matrix ko print karna (display ke liye)
    printf("\nMATRIX IS:\n");
    for (int i = 0; i < r; i++)          // har row print
    {
        for (int j = 0; j < c; j++)      // har column print
        {
            printf("%d ", arr[i][j]);   // element print
        }
        printf("\n");                   // next row ke liye new line
    }

    int r1, c1, r2, c2;

    // 🔹 Rectangle ke top-left corner ka input
    printf("Enter r1 c1 (top-left): ");
    scanf("%d %d", &r1, &c1);

    // 🔹 Rectangle ke bottom-right corner ka input
    printf("Enter r2 c2 (bottom-right): ");
    scanf("%d %d", &r2, &c2);

    int sum = 0;   // rectangle ke sum ko store karne ke liye variable

    // 🔹 Rectangle ke andar ke sab elements ka sum nikalna
    for (int i = r1; i <= r2; i++)       // r1 se r2 tak rows
    {
        for (int j = c1; j <= c2; j++)   // c1 se c2 tak columns
        {
            sum += arr[i][j];           // har element ko sum me add karna
        }
    }

    // 🔹 Final result print karna
    printf("Sum of rectangle = %d\n", sum);

    return 0;   // program successful end
}
