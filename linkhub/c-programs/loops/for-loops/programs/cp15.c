//Ques : Print the nth fibonacci number.

#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE FIBONACCI TERM = ");
    scanf("%d",&n);

    int a = 1, b = 1, sum;

    if(n == 1 || n == 2)
    {
        printf("THE %dth term = 1", n);
    }
    else
    {
        for(int i = 1; i <= n-2; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
        }
        printf("THE %dth term = %d", n, sum);
    }

    return 0;
}
