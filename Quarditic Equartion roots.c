#include "stdio.h"
#include "math.h"
// Quarditic Equartion roots

void main()
{
    float a, b, c, root1, root2, descriminant;
    printf("Enter the value of a,b and c for the quarditic equation ax^2 + bx -c = 0\n");
    scanf("%f%f%f", &a, &b, &c);
    descriminant = ((pow(b, 2)) - 4 * a * c);
    if (descriminant > 0)
    {
        root1 = ((-b + sqrt(descriminant)) / (2 * a));
        root2 = ((-b - sqrt(descriminant)) / (2 * a));
        printf("Roots are real and different\n");
        printf("first root is : %f\n", root1);
        printf("Second root is : %f\n", root2);
    }
    else if (descriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal\n");
        printf("first root = second root = %f\n", root1);
    }
    else
    {
        printf("The roots are imaginary.\n");
    }
}