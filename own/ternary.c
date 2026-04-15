// #include<stdio.h>
// int main()
// {
//     int time=20;
//     (time<18) ? printf("good morning"): printf("good evening");
//     return 0;
// }
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d", &age);
    age>=18? printf("adult"): printf("Child");
    return 0;
}
