#include <stdio.h>

// ye function n se 1 tak numbers print karta hai (recursion use karke)
void decress(int n)
{
    // base condition
    // jab n = 0 ho jaye to function return kar de
    if (n == 0)
        return;

    // current value print karo
    printf("%d ", n);

    // function khud ko n-1 ke sath call karega
    decress(n - 1);
}

int main()
{
    int n;

    // user se number input lena
    printf("ENTER A NUMBER = ");
    scanf("%d", &n);   // &n zaroori hai

    // function call
    decress(n);

    return 0;
}
