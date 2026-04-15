#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num,n;
    srand(time(0));
    num = (rand() % 3) + 1;
printf("Enter 1 for rock, 2 for paper, 3 for scissors\n");
scanf("%d",&n);

    if(n==1)
    {
        printf("You choose rock\n");
        if(num==1)
        {
            printf("computer choose rock.\n Draw");
        }
        else if(num==2)
        {
            printf("computer choose paper.\nYou loose");
        }
        else if(num==3)
        {
            printf("computer choose scissors.\n you won");
        }
    }
     if(n==2)
    {
        printf("You choose paper\n");
        if(num==1)
        {
            printf("computer choose rock.\n win");
        }
        else if(num==2)
        {
            printf("computer choose paper.\nYou draw");
        }
        else if(num==3)
        {
            printf("computer choose scissors.\n you loose");
        }
    }
     if(n==3)
    {
        printf("You choose scissors\n");
        if(num==1)
        {
            printf("computer choose rock.\n you loose");
        }
        else if(num==2)
        {
            printf("computer choose paper.\nYou win");
        }
        else if(num==3)
        {
            printf("computer choose scissors.\n you draw");
        }
    }
    return 0;

}