/*Write a C program to find all possible triplets in an array whose sum is equal to a given target value. Also count the total number of such triplets.*/



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

    // 👉 Triplet milne ka flag aur total triplets ka counter
    int found = 0;
    int triplets = 0;

    // 👉 Array ke elements input lene ke liye loop
    for (int i = 0; i < n; i++)
    {
        printf("ENTER %d NUMBER = ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 👉 Array ke sabhi possible triplets check karna
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                // 👉 Agar teen elements ka sum target ke barabar ho
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    // 👉 Valid triplet print karna
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);

                    // 👉 Total valid triplets count karna
                    triplets++;

                    // 👉 Triplet mil gaya hai
                    found = 1;
                }
            }
        }
    }

    // 👉 Agar koi bhi triplet nahi mila
    if (found == 0)
        printf("TRIPLETS NOT FOUND\n");
    else
        // 👉 Total triplets print karna
        printf("TOTAL TRIPLETS = %d", triplets);

    return 0;   // Program successful execution
}
