//wap to input full name and display welcome full name

//#include<stdio.h>
//int main()
//{
//  char name[20];
//printf("enter your name ");
// gets(name);
//printf("welcome %s", name);
//return 0;
//}
#include<stdio.h>
int main()
{
  char name[20];
    printf("enter your name ");
    fgets(name,20,stdin);
    printf("welcome ");
    puts(name);
    return 0;
}
