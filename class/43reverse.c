//wap to reverse a string and display it.

#include<stdio.h>
int main()
{
    char name[20]="sandip";
    int i, count=0;
    for(i=0; name[i]!='\0'; i++)
    {
        count++;
    }
    for(i=count-1; i>=0; i--)
    {
        printf("%c", name[i]);
    }
    return 0;
}
