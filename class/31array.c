//wap to make an array of size 5 and print them in reverse order.

#include<stdio.h>
int main()
{
    int arr[5], i;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 4; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}