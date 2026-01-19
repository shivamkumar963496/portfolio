/* Write a C program to add two 2×2 matrices and display the resultant matrix */

#include <stdio.h>
int main()
{
    // 🔹 First 2x2 matrix declare aur initialize
    int a[2][2] = {{1, 2}, {3, 4}};

    // 🔹 Second 2x2 matrix declare aur initialize
    int b[2][2] = {{5, 6}, {7, 8}};

    // 🔹 Sum matrix jisme result store hoga
    int sum[2][2];

    // 🔹 Dono matrices ko add karna
    for (int i = 0; i < 2; i++)          // rows ke liye loop
    {
        for (int j = 0; j < 2; j++)      // columns ke liye loop
        {
            sum[i][j] = a[i][j] + b[i][j];  // corresponding elements ka addition
        }
    }

    // 🔹 Resultant matrix print karna
    printf("SUM OF TWO MATRICES:\n");
    for (int i = 0; i < 2; i++)          // rows ke liye loop
    {
        for (int j = 0; j < 2; j++)      // columns ke liye loop
        {
            printf("%d  ", sum[i][j]);   // sum matrix ka element print
        }
        printf("\n");                   // next row ke liye new line
    }

    return 0;  // program successfully end
}
