/*print sum from 1 to n using recursion*/

#include <stdio.h>

/* Print sum from 1 to n using recursion */

#include<stdio.h>

// ye function 1 se n tak ka sum return karega
int sum(int n)
{
    // base condition
    // jab n = 0 ho jaye to sum 0 hoga
    if(n == 0)
        return 0;

    // recursive call
    // n + (n-1) + (n-2) ... + 1
    return n + sum(n - 1);
}

int main()
{
    int n;

    printf("ENTER A NUMBER = ");
    scanf("%d", &n);

    // function call
    int ans = sum(n);

    // final result print
    printf("Sum = %d", ans);

    return 0;
}
