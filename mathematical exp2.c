#include "stdio.h"
#include "math.h"
#include "stdlib.h"

// mathematical exp
int main()
{
    double a, b, c, d, res;
    printf("Enter the value of a,b,c,d");
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    res = ((a * b) / ((pow(c, 2)) - d));
    printf("%lf", res);
    return 0;
}