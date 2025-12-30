//wap to take input for size of array and again take input value upto that number and find the smallest one

#include<stdio.h>
int main()
{
    int size_arr[100];
    int small=arr[0];
    int n, i;
for (i<=0; i<size_arr; i++)
{
    scanf("%d", &size_arr[i]);
    printf("Enter %d elements:\n", n);
    for(i=0; i<size_arr; i++)
    {
        scanf("%d", &size_arr[i]);
    }
    for(i=0; i<size_arr; i++)
    {
        if(size_arr[i]<small)
        {
            small=size_arr[i];
        }
    }
    printf("The smallest element is: %d\n", small);
    return 0;
}
}