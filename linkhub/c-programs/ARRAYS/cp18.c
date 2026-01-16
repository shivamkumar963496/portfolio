/*WAP (Write a C Program) to check whether a given number x is present in an array or not.
If the element is found, display an appropriate message; 
otherwise, display that the element is not present.*/


#include <stdio.h>

int main()
{
    int n, x;
  
    // n → array ka size
    // x → wo number jisko array me search karna hai

    // 🔹 user se array ka size input lena
    printf("ENTER SIZE OF ARRAY = ");
    scanf("%d", &n);

    // 🔹 user-defined size ka array declare karna
    int arr[n];

    // 🔹 array ke elements input lene ke liye loop
   
    for (int i = 0; i < n; i++)
    {
        printf("ENTER %d ARRAY ELEMENTS:",i+1);
        // har element ko array me store karna
        scanf("%d", &arr[i]);
    }

    // 🔹 user se number x input lena
    // jisko array me check karna hai
    printf("ENTER VALUE OF x = ");
    scanf("%d", &x);



        int sn=n*(n-1)/2;
    int sn2=sn-x;
    int found = 0;   
    // found ek flag variable hai
    // 0 → x nahi mila
    // 1 → x mil gaya

    // 🔹 array ke har element ko x se compare karna
    for (int i = 0; i < n; i++)
    {
        // agar current element x ke barabar ho
        if (arr[i] == x)
        {
            found = 1;   // x mil gaya
            break;       // loop yahin stop kar do
        }
    }

    // 🔹 final result print karna
    if (found == 1)
        printf("YES, %d is present in the array", x);
    else
        printf("NO, %d is not present in the array", x);

    return 0;   // program successful end
}
