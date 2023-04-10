#include "stdio.h"
#include "math.h"
#include "stdlib.h"

// mathematical exp
int main()
{
    double x, y, result;
    printf("Enter the value of x,y");
    scanf("%lf%lf", &x, &y);
    result = ((sqrt(1 + x)) + ((log(cos(2 * x))) / (1 + abs(y))));
    printf("%lf", result);
    return 0;
}