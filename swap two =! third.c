#include "stdio.h"
#include "math.h"
// swap the value of two var without third var
int main()
{
    int x, y;
    printf("Enter the value of x,y");
    scanf("%d%d", &x, &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("now A is %d and b is %d", x, y);
    return 0;
}