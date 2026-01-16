
/*Write a C program to reverse the elements of an array using a function,
 without using any extra (temporary) variable.*/

#include <stdio.h>

// 👉 Function jo array ko reverse karta hai bina temp variable ke
void reverse(int arr[], int n)
{
    int i = 0;     // left side index (start se)
    int j = n - 1; // right side index (end se)

    // 👉 Jab tak i chhota hai j se, swapping karte raho
    while (i < j)
    {
        // 👉 Dono elements ka sum arr[i] me store
        arr[i] = arr[i] + arr[j];

        // 👉 arr[j] me original arr[i] aa jaata hai
        arr[j] = arr[i] - arr[j];

        // 👉 arr[i] me original arr[j] aa jaata hai
        arr[i] = arr[i] - arr[j];

        // 👉 Left index aage badhao
        i++;

        // 👉 Right index peeche lao
        j--;
    }
    return; // function end
}

int main()
{
    int n;
    // 👉 User se array ka size lena
    printf("ENTER SIZE OF ARRAY = ");
    scanf("%d", &n);

    int arr[n]; // 👉 User-defined size ka array

    // 👉 Array ke elements input lena
    for (int i = 0; i < n; i++)
    {
        printf("ENTER %d NUMBER = ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 👉 Reverse function call
    reverse(arr, n);

    // 👉 Reversed array print karna
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0; // program successfully end
}
