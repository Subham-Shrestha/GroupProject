#include<stdio.h>
int main()
{
    int arr[5];
    int *p,i;
    p=&arr[0];
    printf("Enter 5 elements in array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    int greatest=*p;
    for(i=0;i<5;i++)
    {
        if(greatest<*(p+i))
        {
            greatest=*(p+i);
        }
    }
    printf("Largest element is %d",greatest);
    return 0;
}