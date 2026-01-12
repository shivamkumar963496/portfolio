/*PRINT SUM OF 1 TO N USING RECURSION*/



#include <stdio.h>

// sum function:
// yeh function recursion ka use karke
// 1 se n tak sabhi numbers ka sum nikalta hai
void sum(int n, int s)
{
    // Base condition:
    // jab n = 0 ho jaye
    // tab accumulated sum (s) print karke function stop ho jata hai
    if (n == 0)
    {
        printf("%d", s);
        return;
    }

    // Recursive call:
    // har call me n ko sum me add kiya ja raha hai
    // aur n ko 1 se kam karke function dobara call ho raha hai
    sum(n - 1, s + n);

    // return optional hai kyunki function void hai
    return;
}

int main()
{
    int n;

    // user se number input lena
    printf("ENTER A NUMBER=");
    scanf("%d", &n);

    // function call:
    // yahan se recursion start hoti hai
    // initial sum = 0 pass kiya gaya hai
    sum(n, 0);

    return 0;
}
