/* Program 6: Swap Two Numbers (Call by Value)
   Ye program call by value ka concept samjhata hai
   jisme original values change nahi hoti
*/

#include <stdio.h>   // Input-output ke liye header file

// Call by value swap function
// Is function me variables ki copy aati hai, original nahi
void swap(int a, int b)
{
    int temp = a;   // temp me a ki value store kar rahe hain
    a = b;          // a me b ki value daal rahe hain
    b = temp;       // b me temp (old a) ki value daal rahe hain

    // Function ke andar swapped values print kar rahe hain
    printf("Inside function: a=%d b=%d\n", a, b);
}

int main()
{
    int x = 10, y = 20;   // x aur y ki original values

    // swap function ko x aur y pass kar rahe hain
    swap(x, y);

    // Main function me values same rahengi
    // kyunki call by value me copy pass hoti hai
    printf("In main: x=%d y=%d", x, y);

    // Program end
    return 0;
}
