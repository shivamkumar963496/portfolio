/*Write a C program using recursion to find the factorial of a given number.*/



#include <stdio.h>

// Ye function recursion ka use karke factorial calculate karta hai
int factorial(int n)
{
    // Base condition:
    // Jab n == 1 ho jata hai, tab factorial 1 return hota hai
    if (n == 1||n==0)
        return 1;

    // Recursive call:
    // n * factorial(n-1) se factorial calculate hota hai
    return n * factorial(n - 1);
}

int main()
{
    int n;

    // User se number input lena
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);

    // factorial function ko call karna
    int fact = factorial(n);

    // Final result print karna
    printf("Factorial = %d", fact);

    return 0; // Program successfully end
}
