//WAP to declare constant of 2 variable(num1,num2) and take input system(+,-,*,/) and perform calculation accordingly

#include <stdio.h>

int main() {
    int num1;
    int num2;
    char sp;

    printf("Enter an operator: ");
    scanf(" %c", &sp);
    printf("Enter two number: ");
    scanf("%d%d", &num1,&num2);

    switch (sp) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;

        case '-':
            printf("Result = %d\n", num1 - num2);
            break;

        case '*':
            printf("Result = %d\n", num1 * num2);
            break;

        case '/':
            printf("Result= %d\n", num1 / num2);
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}