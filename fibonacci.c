#include "stdio.h"

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    // using normal function and loop
    /*
    int t1 = 0, t2 = 1, n, nextTerm;
    printf("Enter the number of terms : \n");
    scanf("%d", &n);
    printf("THE fibonacci series is:\n");
    for (int i = 0; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    */
    // using recursion function

    int n, i;
    printf("Enter the number of terms : \n");
    scanf("%d", &n);
    printf("THE fibonacci series is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", fibonacci(i));
    }
    return 0;
}
