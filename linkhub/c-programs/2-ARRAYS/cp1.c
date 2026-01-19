/*Write a C program to declare and initialize a 3×3 two-dimensional array and display 
all its elements in matrix form using nested loops.*/



#include <stdio.h> // Standard input-output library

int main()
{
    // 2D array declare aur initialize kiya (3 rows, 3 columns)
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Outer loop → rows ke liye
    for (int i = 0; i < 3; i++)
    {
        // Inner loop → columns ke liye
        for (int j = 0; j < 3; j++)
        {
            // Current row aur column ka element print karna
            printf("%d ", arr[i][j]);
        }

        // Har row print hone ke baad new line
        printf("\n");
    }

    return 0; // Program successful execution
}
