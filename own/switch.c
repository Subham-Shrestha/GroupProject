#include<stdio.h>
int main()
{
    int day;
    printf("Enter (1-7)day: ");
    scanf("%d", &day);
    switch(day)
    {
        case 1: 
        printf("Sunday");
        break;
        case 2: 
        printf("Monday");
        break;
        case 3: 
        printf("Tuesday");
        break;
        case 4: 
        printf("Wednesday");
        break;
        case 5: 
        printf("Thurday");
        break;
        case 6: 
        printf("Friday");
        break;
        case 7: 
        printf("Saturday");
        break;
        default: printf("Not a valid day");
    }
    return 0;
}