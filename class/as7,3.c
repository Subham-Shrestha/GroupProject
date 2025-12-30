#include <stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<=4; i++)
    {
        // Spaces
        for(j=1; j<=4-i; j++)
        {
            printf("  ");
        }

        // Increasing numbers
        for(j=1; j<=i; j++)
        {
            printf("%d ", j);
        }

        // Decreasing numbers
        for(k=i-1; k>=1; k--)
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
