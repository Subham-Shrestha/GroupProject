//wap to create an array of size 5 and display them.
#include <stdio.h>
int main() 
{
    int i,arr[5] = {1, 2, 3, 4, 5};
    printf("Elements in array is: \n");

    for(i = 0; i < 5; i++) 
    {
        printf("  %d ", arr[i]);
    }
    return 0;
}
