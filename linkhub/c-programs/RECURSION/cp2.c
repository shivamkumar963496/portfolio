
/*Recursion using function to print a message)*/


#include <stdio.h>

// greet function: yeh function "HELLO SHIVAM" ko n times print karega
// yeh recursion ka use karta hai
void greet(int n)
{
    // Base Condition:
    // Jab n == 0 ho jaye, tab function ruk jayega
    if (n == 0)
        return;

    // Message print ho rahi hai
    printf("HELLO SHIVAM\n");

    // Recursive Call:
    // n ko 1 kam karke function khud ko call kar raha hai
    greet(n - 1);

    // return likhna optional hai (void function me)
    return;
}

int main()
{
    int n;

    // User se number input lene ke liye
    printf("ENTER A NUMBER=");
    scanf("%d", &n);

    // greet function ko call kiya ja raha hai
    // jitni value n hogi, utni baar HELLO SHIVAM print hoga
    greet(n);

    return 0;
}
