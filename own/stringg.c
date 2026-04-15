#include<stdio.h>
int main ()
{
    char name[15];
    printf("Type your full name ");
    fgets(name, sizeof(name),stdin);

    printf("hello %s", name);
    return 0;
}