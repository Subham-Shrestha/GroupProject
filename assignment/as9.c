//wap to transpose a matrix (3*2)

#include <stdio.h>

int main() {
    int a[3][2], t[2][3], i, j;

    printf("Enter elements of 3x2 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            t[j][i] = a[i][j];
        }
    }
    printf("Transpose of the matrix (2x3):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
