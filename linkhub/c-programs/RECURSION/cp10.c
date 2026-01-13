/* count number of ways of stair single step double step */

#include <stdio.h>

// ye function n stairs chadhne ke total ways return karta hai
int ways(int n)
{
    // base condition
    // agar 1 stair hai → sirf 1 way
    // agar 2 stair hai → 2 ways (1+1 ya 2)
    if (n <= 2)
        return n;

    // recursive call
    // last step ya to 1 stair ka ho sakta hai
    // ya 2 stair ka
    // isliye ways(n) = ways(n-1) + ways(n-2)
    return ways(n - 1) + ways(n - 2);
}

int main()
{
    int n;

    // user se stairs ki total number lena
    printf("ENTER NUMBER OF STAIR = ");
    scanf("%d", &n);

    // function call
    int x = ways(n);

    // total ways print karna
    printf("Number of ways = %d", x);

    return 0;
}
