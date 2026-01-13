/*Write a C program to find the nth Fibonacci number using recursion*/

#include <stdio.h>

// ye function nth Fibonacci number return karta hai
int fibo(int n)
{
    // base condition
    // pehla aur dusra Fibonacci number = 1 hota hai
    if (n == 1 || n == 2)
        return 1;

    // recursive relation
    // fib(n) = fib(n-1) + fib(n-2)
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;

    // user se input lena
    printf("ENTER A NUMBER = ");
    scanf("%d", &n);

    // nth Fibonacci number print karna
    printf("Fibonacci = %d", fibo(n));

    return 0;
}
