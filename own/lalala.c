#include <stdio.h>

int main() {
    int num, i, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    if (count == 2)
        printf("It is a Prime number", num);
    else
        printf("It is NOT a Prime number", num);

    return 0;
}
