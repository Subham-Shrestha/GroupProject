//wap to input values and print the greatest one

#include<stdio.h>
int main()  
{
    int arr[100];
    int n, i, great;
    printf("Enter the number:", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    great=arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]>great)
        {
            great=arr[i];
        }
    }
    printf("The greatest number is: %d\n", great);
    return 0;
}