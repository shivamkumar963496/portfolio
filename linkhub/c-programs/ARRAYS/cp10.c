/*Write a C program to find the difference between the sum of even-indexed 
and odd-indexed elements of an array.*/

#include <stdio.h>
int main()
{
    int n;

    // 👉 User se array ka size input lena
    printf("ENTER SIZE OF ARRAY = ");
    scanf("%d", &n);

    // 👉 User-defined size ka integer array declare karna
    int arr[n];

    // 👉 Array ke elements user se input lene ke liye loop
    for (int i = 0; i < n; i++)
    {
        // User ko batana kaunsa number enter karna hai
        printf("ENTER %d NUMBER = ", i + 1);

        // Input value ko array ke i-th index par store karna
        scanf("%d", &arr[i]);
    }

    // 👉 Even index aur Odd index elements ka sum store karne ke variables
    int sumEven = 0, sumOdd = 0;

    // 👉 Array ke elements par loop chala kar sum nikalna
    for (int i = 0; i < n; i++)
    {
        // Agar index even hai (0, 2, 4, ...)
        if (i % 2 == 0)
            sumEven += arr[i];   // Even index element ka sum
        else
            sumOdd += arr[i];    // Odd index element ka sum
    }

    // 👉 Even index sum aur Odd index sum ka difference nikalna
    int result = sumEven - sumOdd;

    // 👉 Final result screen par print karna
    printf("DIFFERENCE (EVEN INDEX SUM - ODD INDEX SUM) = %d", result);

    return 0;   // Program successful execution
}
