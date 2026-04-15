//wap to store values in multidimentional array and display them.

#include<stdio.h>
int main()
{
    int i,j;
    int arr[2][3]={{30,28,52},{40,36,29}};
    for(i=0; i<2; i++)

    {
        for(j=0;j<3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}