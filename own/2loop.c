//FOR LOOP

// #include<stdio.h>
// int main()
// {
//     //int i;
//     for(int i=0; i<=10; i++)
//     { 
//        printf("Hello world\t");
//     }
// return 0;
// }

// #include<stdio.h>
// int main()
// {
//     //int i;
//     for(int i=0; i<=10; i++)
//     { 
//        printf("%d\t", i);
//     }
// return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char ch;
//     for(ch='a'; ch<'z'; ch++){
//         printf("%c\t", ch);
//     }
// return 0;
// }

//WAP to print the sum of first natural numbers
// #include<stdio.h>
// int main()
// {
//     int i,n, sum=0;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++)
//     {
//         sum=i+sum;
//     }
//     printf("Sum of natural number till %d: %d",n,sum);
//     return 0;
// }

//wap to print the multiplication table of a number given by the user
// #include<stdio.h>
// int main()
// {
//     int i,n;
//     printf("Enter a nummber: ");
//     scanf("%d",&n);
//     for(i=1; i<=10; i++)
//     {
//         printf("%d\n",n*i);
//     }
//     return 0;
// }
//WHILE LOOP

// #include<stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=5){
//         printf("%d\t", i++);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=5)
//     {
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int i=0;
//     while(i<=n){
//         printf("%d\t",i);
//         i++;
//     }
//     return 0;
// }

//DO WHILE LOOP

// #include<stdio.h>
// int main()
// {
//     int i=1;
//     do{
//         printf("%d\t",i);
//         i++;
//     }
//     while(i<=0);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i=10;
//     do
//     {
//         printf("%d", i);
//         i++;
//     }
//     while(i<5);
//     return 0;
// }

//BREAK
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1; i<=5; i++)
//     {
//         if(i==3){
//             break;
//         }
//         printf("%d\t", i);
//     }
//     return 0;
// }

//wap to find the factorial of n number

#include<stdio.h>
int main()
{
    int i,n, fact=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        fact*=i;
    }
    printf("Factorial is %d", fact);
    return 0;
}