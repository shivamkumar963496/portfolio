/* 
WAP to find the missing element in an array
containing numbers from 1 to n
*/

#include <stdio.h>

int main()
{
    int n = 100;        // range 1 to 100
    int arr[99];       // ek element missing hai
    int sum = 0;

    // 🔹 Array input
    printf("ENTER 99 ELEMENTS:\n");
    for (int i = 0; i < 99; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];   // array ka actual sum
    }

    // 🔹 Expected sum using formula
    int expected_sum = n * (n + 1) / 2;

    // 🔹 Missing element
    int missing = expected_sum - sum;

    printf("MISSING ELEMENT = %d", missing);

    return 0;
}
