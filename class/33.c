//create an array of size 6 and find the sum of even index value only
#include<stdio.h>
int main()  
{
    int arr[6];
    int sum=0;
    int i;
    printf("Enter 6 elements:\n");
    for(i=0; i<6; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<6; i=i+2)
    {
        sum=sum+arr[i];
    }
    printf("The sum of even index values is: %d\n", sum);
    return 0;
}