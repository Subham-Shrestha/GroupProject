//wap to find the average of 8 numbers
#include<stdio.h>
int main()
{
    int arr[8];
    int sum=0;
    float average;
    int i;
    printf("Enter 8 numbers:\n");
    for(i=0; i<8; i++)
    {
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    average=sum/8.0;
    printf("The average of 8 numbers is: %.2f\n", average);
    return 0;
}