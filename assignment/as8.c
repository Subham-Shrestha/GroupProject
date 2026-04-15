//wap to seperate even and odd elements into two arrays
#include <stdio.h>
int main() 
{
    int a[5], even[5], odd[5];
    int i, e = 0, o = 0;
    for (i=0; i<5; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i=0; i<5; i++)
    {
        if (a[i]%2==0) {
            even[e]=a[i];
            e++;
        } else {
            odd[o]=a[i];
            o++;
        }
    }
    printf("Even elements:\n");
    for (i = 0; i < e; i++) 
    {
        printf("%d ", even[i]);
    }
    printf("\nOdd elements:\n");
    for (i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }
    return 0;
}
