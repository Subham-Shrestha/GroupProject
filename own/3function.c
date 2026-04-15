// normal syntax
// #include<stdio.h>
// int interest();   //declaration
// int main()         //function call
// {
//     interest();
//     return 0;
// }
// int interest()       //define
// {

// }

// #include<stdio.h>
// int printworld();
// int main()
// {
//     printworld();
//     printworld();
//     printworld(); 
//     return 0;
// }
// int printworld()
// {
//     printf("Hello surakshya\n ");
// }

// #include<stdio.h>
// int namaste();
// int bonjour();
// int main()
// {
//     printf("enter i for indian and f for french: ");
//     char ch;
//     scanf("%c", &ch);
//     if(ch=='i')
//     {
//         namaste();
//     }
//     else{
//         bonjour();
//     }
//     return 0;
// }
// int namaste()
// {
//     printf("NAMASTE\n");
// }
// int bonjour()
// {
//     printf("BONJOUR\n");
// }

// #include<stdio.h>
// int sum(int a, int b);
// int table(int n);
// int main()
// {
//     sum(int a, int b);
//     table(int n);
//     return 0;
// }
// int sum(int a, int b)
// int table(int n)
// {

// }

//RECURSION FUNCTION
#include<stdio.h>
int printHW(int count);
int main()
{
    printHW(5);
    return 0;
}
int printHW(int count)
{
    if(count==0)
    {
        return 0;
    }
    printf("Hello World\n");
    printHW(count-1);
}