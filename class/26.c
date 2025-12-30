//wap to print "try again" again and again until user type the correct digit. correct digit=0

#include<stdio.h>
int main()
{
    int num;
    do
    {
    printf("Enter a number to check: ");
    scanf("%d", &num);
    if(num!=0)
    {
        printf("Please try again!\n");
    }
    }
    while(num!=0);
    printf("CORRECT");

    return 0;
    

}