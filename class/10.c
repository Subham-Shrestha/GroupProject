#include<stdio.h>
int main()
{
    int str;
    printf("enter a number: ");
    scanf("%d",&str);

    switch(str)
    {
        case 1:
        printf("one");
        break;

        case 2:
        printf("two");
        break;

        case 3:
        printf("three");
        break;

        case 4:
        printf("four");
        break;

        default:
        printf("not in the range");
    
    return 0;
    }
}