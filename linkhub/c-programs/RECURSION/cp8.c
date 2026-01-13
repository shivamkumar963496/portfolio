/*print a ki power n using recursion*/

/* print a ki power b using recursion */

#include <stdio.h>

// ye function a ki power b (a^b) calculate karta hai
int power(int a, int b)
{
    // base condition
    // agar power 0 ho to result hamesha 1 hota hai
    if (b == 0)
        return 1;

    // recursive call
    // a * a^(b-1)
    return a * power(a, b - 1);
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
    int p = power(a, b);

    // final result print
    printf("Result = %d", p);

    return 0;
}
