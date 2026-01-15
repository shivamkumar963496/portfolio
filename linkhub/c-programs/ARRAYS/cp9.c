/*Write a C program to count how many elements of an array are greater than a given number.*/



#include <stdio.h>

int main()
{
    int n;

    // Array ka size input lena
    printf("ENTER SIZE OF ARRAY = ");
    scanf("%d", &n);

    int arr[n];   // user-defined size ka array

    // Array elements input lena
    for (int i = 0; i <= n - 1; i++)
    {
        printf("ENTER %d NUMBER =+ ", i + 1);
        scanf("%d", &arr[i]);   +
    }

    int x;
    // Comparison number input lena
    printf("JIS NUMBER SE BDE NUMBER COUNT KARNE HAI = ");
    scanf("%d", &x);

    int count = 0;

    // Count karna kitne elements x se bade hain
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > x)
            count++;
    }

    // Final result print
    printf("\n\nTOTAL NUMBERS JO %d SE BADE HAIN = %d", x, count);

    return 0;
}
