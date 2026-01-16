/* Write a C program to read elements of an array and copy them
   into another array in reverse order using user-defined size. */

#include <stdio.h>

int main()
{
    int n;
    // n variable array ka size store karega

    // 👉 User se array ka size input lena
    printf("ENTER SIZE OF ARRAY = ");
    scanf("%d", &n);

    // 👉 User-defined size ke do arrays declare karna
    int arr[n];
    // arr array original elements store karega

    int brr[n];
    // brr array reverse order ke elements store karega

    // 👉 arr array me elements input lene ke liye loop
    for (int i = 0; i < n; i++)
    {
        // User ko batana kaunsa number enter karna hai
        printf("ENTER %d NUMBER = ", i + 1);

        // Input lekar arr ke i-th index me store karna
        scanf("%d", &arr[i]);
    }

    // 👉 arr array ko reverse order me brr array me copy karna
    for (int i = 0; i < n; i++)
    {
        // arr ke last element se value lekar
        // brr ke starting index me store karna
        brr[i] = arr[n - 1 - i];
    }

    // 👉 brr array ke elements print karna
    for (int i = 0; i < n; i++)
    {
        // Reverse array ka output print karna
        printf("%d ", brr[i]);
    }

    // Program successfully end
    return 0;
}
