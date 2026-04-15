// 1 WAP to input two numbers and perform addition using pointer.
#include<stdio.h>
int main()
{
	int num1, num2, sum;
	int *p_num1, *p_num2, *p_sum;
	p_num1 = &num1;
	p_num2 = &num2;
	p_sum = &sum;
	printf("Enter any two numbers: ");
	scanf("%d %d", p_num1, p_num2);
	*p_sum = *p_num1 + *p_num2;
	printf("Sum = %d", *p_sum);
    return 0;
}
