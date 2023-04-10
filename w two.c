#include "stdio.h"

void main()
{
    while (1)
    {
        int x, y;
        printf("Enter the value of x and y\n\n\n");
        scanf("%d%d", &x, &y);
        if (x > y)
        {
            printf("%d is greater than %d\n\n\n\n", x, y);
        }
        else
        {
            printf("%d is smaller than %d\n\n\n\n", x, y);
        }
    }
}