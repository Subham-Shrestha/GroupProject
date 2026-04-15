//wap to input values and print the greatest one

#include<stdio.h>
int main()  
{
    int size_arr,i;
    int  greatest;
    printf("Enter the size of an array:");
    scanf("%d", &size_arr);
     int arr[size_arr];
    printf("Enter %d elements, size_arr");
    for(i=0; i<size_arr; i++)
    {
    scanf("%d", &arr[i]);
    }
    greatest=arr[0];
    for(i=0; i<size_arr; i++)
    {
        if(arr[i]>greatest)
        {
            greatest=arr[i];
        }
    }
    printf("The greatest number is: %d", greatest);
    return 0;
}