//wap to count even and odd elements in an array
#include <stdio.h>
int main()
{
    int arr[5] = {4,7,6,9,2};
    int i, even=0, odd=0;
     for (i=0; i<5; i++) 
    {
    if(arr[i] % 2==0)
        even++;
    else
        odd++;
    }
    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);
    return 0;
}
