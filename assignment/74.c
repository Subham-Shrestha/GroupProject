//4 WAP to dynamically allocate memory for N integers using pointers, store values, and display them.
#include<stdio.h>
#include<stdlib.h> 
int main() 
{
    int n, i, *ptr;
    printf("Total Numbers: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int)); 
    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", (ptr + i)); 
    }
    printf("Stored numbers: ");
    for(i=0; i<n; i++) {
        printf("%d ", *(ptr + i));
    }
    free(ptr); 
    return 0;
}