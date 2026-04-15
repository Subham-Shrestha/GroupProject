//wap to find the second largest and second smallest element in an array
//#include <stdio.h>
// int main() 
// {
//     int a[5] = {1, 4, 7, 5, 9};
//     int i;
//     int largest, second_largest;
//     int smallest, second_smallest;
//     largest = second_largest = a[0];
//     smallest = second_smallest = a[0];
//     for (i = 1; i < 5; i++) 
//     {
//         if (a[i] > largest)
//             largest = a[i];
//         if (a[i] < smallest)
//             smallest = a[i];
//     }
//     second_largest = smallest;
//     second_smallest = largest;

//     for (i = 0; i < 5; i++) {
//     if (a[i] > second_largest && a[i] < largest)
//         second_largest = a[i];
//     if (a[i] < second_smallest && a[i] > smallest)
//         second_smallest = a[i];
//     }
//     printf("Second Largest = %d\n", second_largest);
//     printf("Second Smallest = %d\n", second_smallest);
//     return 0;
// }
//wap to find the second largest and second smallest element in an array

#include<stdio.h>
int main()
{
    int i,j, temp, arr[5]={1,4,7,9,5};
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=5;j++){
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
    printf("Second Largest = %d\n", arr[1]);
    printf("Second Smallest = %d\n", arr[3]);
    return 0;
}