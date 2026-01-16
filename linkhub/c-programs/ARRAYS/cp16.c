/*Write a C program to rotate the given array a by k steps, where k is a non-negative integer.
Note: The value of k can be greater than n, where n is the size of the array.
Perform the rotation using the reverse method (without using any extra array).*/


#include <stdio.h>

// 🔹 Ye function array ke ek part ko reverse karta hai
// arr[]  -> array
// start -> starting index
// end   -> ending index
void reverse(int arr[], int start, int end)
{
    // Jab tak start index, end se chhota hai
    while (start < end)
    {
        // 🔹 swap logic
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // 🔹 aage badhna
        start++;

        // 🔹 peeche aana
        end--;
    }
}

int main()
{
    int n, k;

    // 🔹 user se array ka size lena
    printf("ENTER SIZE OF ARRAY = ");
    scanf("%d", &n);

    // 🔹 user-defined size ka array
    int arr[n];

    // 🔹 array ke elements input lena
   
    for (int i = 0; i < n; i++)
    {
        printf("ENTER %d ARRAY ELEMENTS:",i+1);
        scanf("%d", &arr[i]);
    }

    // 🔹 k steps input lena
    printf("ENTER VALUE OF k = ");
    scanf("%d", &k);

    // 🔹 agar k, n se bada ho
    // example: k = 7, n = 5
    // actual rotation = 7 % 5 = 2
    k = k % n;

    // 🔹 RIGHT ROTATION LOGIC (Reverse Method)

    // Step 1: pura array reverse kar do
    reverse(arr, 0, n - 1);

    // Step 2: first k elements reverse karo
    reverse(arr, 0, k - 1);

    // Step 3: remaining elements reverse karo
    reverse(arr, k, n - 1);

    // 🔹 final rotated array print karna
    printf("ARRAY AFTER ROTATION:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
