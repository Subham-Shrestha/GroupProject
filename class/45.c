//wap to input full name and print welcome "full name"

#include<stdio.h>
int main()
{
    char name[10];
    printf("enter your name ");
    fgets(name, sizeof(name),stdin);
    printf("welcome %s", name);
    return 0;

}