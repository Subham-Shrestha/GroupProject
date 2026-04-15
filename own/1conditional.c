// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter the age: ");
//     scanf("%d", &age);
//     if(age>=18)
//     //{
//         printf("You can vote");
//     //}
//     else
//     //{
//         printf("You can't vote");
//     //}
//     return 0;
// }

// nested loop
// #include<stdio.h>
// int main()
// {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d",&number);
//     if(number>=0){
//         printf("Positive\n");
//         if(number%2==0)
//         {
//             printf("Even");
//         }
//         else{
//             printf("Odd");
//         }
//     }
//     else{
//         printf("Negative");
//     }
//     return 0;
// }
//wap to check if a student passed or fail
// #include<stdio.h>
// int main()
// {
//     int marks;
//     printf("Enter marks:");
//     scanf("%d",&marks);
//     if(marks>=24)
//     {
//         printf("Pass");
//     }
//     else{
//         printf("Fail");
//     }
//     return 0;
// }

//wap to find if the entered character is uppercase or lowercase 
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch>='a' && ch<='z')
    {
        printf("Lower case");
    }
    else if(ch>='A'&& ch<='Z')
    {
        printf("Upper case");
    }
    else{
        printf("Not a character");
    }
    return 0;
}