/*WAP to find a unique number in an array.*/


#include <stdio.h>

int main()
{
    int n;

    // 🔹 User se array ka size lena
    printf("ENTER SIZE OF ARRAY = ");
    scanf("%d", &n);

    int arr[n];

    // 🔹 Array elements input lena
    for (int i = 0; i < n; i++)
    {
        printf("ENTER %d ELEMENT = ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nUNIQUE ELEMENTS ARE:\n");

    // 🔹 Har element check karna
    for (int i = 0; i < n; i++)
    {
        int count = 0;   // kitni baar element aaya hai

        // 🔹 Current element ko poore array se compare karna
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        // 🔹 Agar element sirf ek baar aaya ho
        if (count == 1)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
