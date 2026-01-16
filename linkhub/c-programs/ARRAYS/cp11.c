/*Write a C program to find and count all pairs of elements in an array whose sum is equal to a given target value.*/

#include <stdio.h>
int main()
{
    int n;

    // 👉 User se array ka size input lena
    printf("ENTER SIZE OF ARRAY = ");
    scanf("%d", &n);

    // 👉 User-defined size ka array declare karna
    int arr[n];

    int x;
    // 👉 User se target sum input lena
    printf("ENTER TARGET OF SUM = ");
    scanf("%d", &x);

    // 👉 Pair milne ka flag aur total pairs ka counter
    int found = 0;
    int total_pairs = 0;

    // 👉 Array ke elements input lene ke liye loop
    for (int i = 0; i < n; i++)
    {
        printf("ENTER %d NUMBER = ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 👉 Array ke sabhi possible pairs check karna
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // 👉 Agar do elements ka sum target ke barabar ho
            if (arr[i] + arr[j] == x)
            {
                // 👉 Valid pair print karna
                printf("(%d,%d)\n", arr[i], arr[j]);

                // 👉 Total valid pairs count karna
                total_pairs++;

                // 👉 Pair mil gaya hai
                found = 1;
            }
        }
    }

    // 👉 Agar koi bhi pair nahi mila
    if (found == 0)
        printf("PAIRS NOT FOUND\n");
    else
        // 👉 Total pairs print karna
        printf("TOTAL PAIRS = %d", total_pairs);

    return 0;   // Program successful execution
}
