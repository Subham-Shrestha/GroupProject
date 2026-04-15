//pointer
// #include<stdio.h>
// int main()
// {
// int a=10;
// int*p;
// p=&a;
// printf("Value=%d",*p);
// return 0;
// }

//wap to input two numbers and perform addition using pointer
// #include<stdio.h>
// int main()
// {
// 	int a,b,sum;
// 	int*p_a,*p_b,*p_sum;
// 	p_a=&a;
// 	p_b=&b;
// 	p_sum=&sum;
// 	printf("enter a and b:");
// 	scanf("%d%d", p_a, p_b);
// 	*p_sum=*p_a+*p_b;
// 	printf("sum=%d",*p_sum);
// 	return 0;
// }
//#include<stdio.h>
// int main()
// {
// int a;
// int *p;
// printf("Enter a number: ");
// scanf("%d",p);
// printf("Value of a=%d\n",a);
// printf("Value of *p=%d", *p);
// return 0;
// }
// #include<stdio.h>
// int main()
// {
// int a=10;
// float b=5.5;
// void*p;
// p=&a;
// printf("Value of*p =%d",*(int*)p);
// return 0;
// }
// #include<stdio.h>
// int main()
// {
// int a=10;
// float b=5.5;
// void*p;
// p=&b;
// printf("Value of*p =%.2f",*(float*)p);
// return 0;
// }
//#include<stdio.h>
//int main()
//{
// int a;
// float b=5.5;

// a=(int)b;
// printf("Value =%d",a);
// return 0;
// }
// 
//{
// int a=65;
// char ch;
// ch=(char)a;
// printf("%c",ch);
// return 0;
// }
//{
// int a;
// int*p;
// int**q;
// p=&a;
// q=&p;
// printf("Enter a number:");
// scanf("%d", p);
// printf("Value of a=%d\n",a);
// printf("Value of *p=%d\n",*p);
// printf("Value of **q=%d\n",**q);
// printf("Address of a=%d\n",&a);
// printf("Address of p=%d\n",&p);
// printf("Address of q=%d\n",&q);
// return 0;
// }
//comparision
//wap to find sum of an array element using pointer
// #include<stdio.h>
// int main()
// {
// int arr[5]={1,2,3,4,5};
// int*p, *q;
// p=&arr[0];
// q=&arr[4];
// int sum=0;
// while(p<=q)
// {
//     sum=sum+*p;
//     p++;
// }
//     printf("sum=%d\n",sum);
//     //printf("%d",&arr[0]);
//     //printf("%d",arr[4]);
// return 0;
// }
//reverse
// #include<stdio.h>
// int main()
// {
// int arr[5]={1,2,3,4,5};
// int*p, *q;
// p=&arr[0];
// q=&arr[4];
// int sum=0;
// while(p<=q)
// printf("%d",*q);
// q--;
// return 0;
// }
 //wap to return status: login successfull  
// #include<stdio.h>
// {
// char*getMessage()
// {
//     return "status:login successful";
// }
// int main()
// {
//     char*status;
//     status=getMessage();
//     printf("Message=%s",status);
// }
// return 0;
// }
//passing argument to a function
#include<stdio.h>
int test(int a, int*p)
{
a=a+5;
*p=*p+5;
printf("Inside test, calue of a=%d *p=%d",a,*p);
}
int main()
{
    int a=2, b=7;
    printf("Valur of a=%d b=%d\n",a,b);
    test(a,&b);
    printf("After test call, a=%d b=%d",a,b);
    return 0;
}
//in the above program , the first arugument is being passed by value and the second arugument is being passed any modification made in the 
//1st argumrnt not being changed however the second argument is being passed by reference and any modifications made in that is being changed