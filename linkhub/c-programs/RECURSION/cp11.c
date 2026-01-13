/*Write a C program to calculate aⁿ using recursion in O(log n) time (fast exponentiation method).*/

#include <stdio.h>

// ye function a ki power b (a^b) ko fast tareeke se calculate karta hai
// time complexity: O(log b)
int powerlog(int a, int b)
{
    // base condition
    // agar power 0 ho to result 1 hota hai
    if (b == 0)
        return 1;

    // recursive call
    // b ko half kar ke power nikalna
    int y = powerlog(a, b / 2);

    // agar b even hai
    // (a^(b/2)) * (a^(b/2))
    if (b % 2 == 0)
    {
        return y * y;
    }
    // agar b odd hai
    // (a^(b/2)) * (a^(b/2)) * a
    else
        return y * y * a;
}

int main()
{
    int a, b;

    // base number input
    printf("ENTER A = ");
    scanf("%d", &a);

    // power input
    printf("ENTER B = ");
    scanf("%d", &b);

    // function call
    int x = powerlog(a, b);

    // final result print
    printf("Result = %d", x);

    return 0;
}
