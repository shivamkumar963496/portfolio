/*PRINT NUMBERS 1 TO N USING RECURSION*/


#include <stdio.h>

// incress function:
// yeh function recursion ka use karke
// 1 se n tak numbers print karta hai
void incress(int x, int n)
{
    // Base condition:
    // Agar current number x, n se bada ho jaye
    // to function yahin ruk jayega
    if (x > n)
        return;

    // Current value of x print ho rahi hai
    printf("%d\n", x);

    // Recursive call:
    // x ko 1 se badhakar function dobara call ho raha hai
    incress(x + 1, n);

    // return optional hai (void function)
    return;
}

int main()
{
    int n;

    // User se number input lene ke liye
    printf("ENTER A NUMBER=");
    scanf("%d", &n);

    // incress function call:
    // yahan se recursion start hoti hai (x = 1 se)
    incress(1, n);

    return 0;
}
