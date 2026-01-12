#include <stdio.h>

// incress function:
// recursion ka use karke 1 se n tak numbers print karta hai
void incress(int x, int n)
{
    // Base condition:
    // jab x, n se bada ho jaye to function stop
    if (x > n)
        return;

    // current value print
    printf("%d\n", x);

    // recursive call (next number)
    incress(x + 1, n);
}

// decress function:
// recursion ka use karke n se 1 tak numbers print karta hai
void decress(int n)
{
    // Base condition:
    // jab n = 0 ho jaye to function stop
    if (n == 0)
        return;

    // current value print
    printf("%d\n", n);

    // recursive call (previous number)
    decress(n - 1);
}

int main()
{
    int n;

    // user se number input
    printf("ENTER A NUMBER=");
    scanf("%d", &n);

    // 1 se n tak print
    incress(1, n);

    // n se 1 tak print
    decress(n);

    return 0;
}
