//wap to sort element of an array in ascending order.

#include<stdio.h>
int main()
{
    int size=4, i,j,k,temp;
    int arr[4]={13,12,11,14};
    for(i=0; i<size; i++)
    {
        for(j=i; j<size; j++)
        {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }   
    printf("After %d pass ",i+1);
    for(k=0; k<size;k++)
    {
        printf("%d", arr[k]);
    }
    printf("after sorting:");
    for(i=0; i<size; i+arr)
    {
    printf("%d ",arr[i]);
    return 0;
}
}