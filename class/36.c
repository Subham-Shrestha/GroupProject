//wap to input values and print the second greatest one

#include <stdio.h>
int main() {
    int n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = second ;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == -2147483648) {
        printf("Second greatest element does not exist.\n");
    } else {
        printf("Second greatest element is: %d\n", second);
    }

    return 0;
}
