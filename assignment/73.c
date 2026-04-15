// 3 WAP to input N numbers in an array and reverse an array using pointers.
#include<stdio.h>
int main() {
    int n, i, arr[100];
    int *ptr;
    printf("Enter size N: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = &arr[n-1]; 
    printf("Reversed array: ");
    for(i=0; i<n; i++) 
	{
        printf("%d ", *(ptr - i)); 
    }
    return 0;
}