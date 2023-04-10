#include "stdio.h"
#include "string.h"
struct Person
{
    char name[10];
    int age;
    float height;
};
union Data
{
    int i;
    float j;
    char str[20];
};

void main()
{

    struct Person person1 = {"Aryan", 20, 1.75};
    printf("I am %s.\nMy age is %d.\nI am %.2f m tall.\n", person1.name, person1.age, person1.height);
    union Data datas;
    datas.i = 10;
    printf("%d\n", datas.i);
    datas.j = 255;
    printf("%f\n", datas.j);
    strcpy(datas.str, "hello");
    printf("%s\n", datas.str);
}