//second largest

#include <stdio.h>
int main()
{
    int size_arr, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size_arr);

    int arr[size_arr]; 

    printf("Enter %d elements:\n", size_arr);
    for (i = 0; i < size_arr; i++)
    {
        scanf("%d", &arr[i]);
    }

    int greatest = arr[0];  

    for (i = 1; i < size_arr; i++)
    {
        if (arr[i] > greatest)
        {
            greatest = arr[i];
        }
    }

    printf("The greatest number is: %d", greatest);

    return 0;
}
