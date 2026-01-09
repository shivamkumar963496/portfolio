/* Program 2: Even or Odd using Function
   Ye program function ka use karke check karta hai
   ki number even hai ya odd
*/

#include <stdio.h>   // Input-output ke liye header file

// Ye function check karta hai ki number even hai ya odd
void evenOdd(int n)
{
    // Agar number ko 2 se divide karne par remainder 0 aaye
    // to number Even hota hai
    if(n % 2 == 0)
        printf("Number is Even");
    else
        // Agar remainder 0 nahi aaya to number Odd hota hai
        printf("Number is Odd");
}

int main()
{
    // Function call:
    // 7 ko evenOdd function me pass kar rahe hain
    evenOdd(7);

    // Program yahin end hota hai
    return 0;
}
