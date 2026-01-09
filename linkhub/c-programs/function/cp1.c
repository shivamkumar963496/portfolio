/* Program 1: Addition of Two Numbers using Function
   Ye program function ka use karke do numbers ka addition karta hai
*/

#include <stdio.h>   // Standard input-output header file
                    // Input aur output ke liye header file

// Function definition
// Ye function do numbers leta hai aur unka sum return karta hai
int add(int a, int b)
{
    // a aur b ka addition kar rahe hain
    int sum = a + b;

    // calculated sum wapas bhej rahe hain
    return sum;
}

int main()
{
    // Function call: add function ko 10 aur 20 pass kiya
    int result = add(10, 20);

    // Final result print kar rahe hain
    printf("Sum = %d", result);

    // Program yahin end hota hai
    return 0;
}
