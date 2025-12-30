#include <stdio.h>
#include <conio.h>

void main()
{
    int time;
    printf("Enter time in hour (0-23): ");
    scanf("%d", &time);

    switch(time)
    {

        case 5: case 6: case 7: case 8: case 9: case 10: case 11:
            printf("Good morning");
            break;

        case 12: case 13: case 14: case 15: case 16:
            printf("Good afternoon");
            break;

        case 17: case 18: case 19: case 20:
            printf("Good evening");
            break;

        default:
            printf("Good night");
    
    }

    getch();
}