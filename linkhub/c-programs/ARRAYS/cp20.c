/*Write a C program to find and display duplicate elements in an array of user-defined size.*/


#include <stdio.h>

int main()
{
    int n;

    // 🔹 User se array ka size input lena
    printf("ENTER SIZE OF ARRAY = ");
    scanf("%d", &n);

    // 🔹 User-defined size ka array
    int arr[n];

    // 🔹 Array ke elements input lena
    for (int i = 0; i < n; i++)
    {
        printf("ENTER %d ELEMENT = ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 🔹 Duplicate check karne ke liye outer loop
    for (int i = 0; i < n; i++)
    {
        // 🔹 Har element ko uske aage wale elements se compare karna
        for (int j = i + 1; j < n; j++)
        {
            // 🔹 Agar dono values same hain
            if (arr[i] == arr[j])
            {
                // 🔹 Duplicate value print karna
                printf("%d IS DUPLICATE VALUE\n", arr[i]);

                // 🔹 Ek baar duplicate milne ke baad
                // inner loop se bahar aa jana
                break;
            }
        }
    }

    return 0;   // 🔹 Program end
}
