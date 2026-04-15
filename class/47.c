//wap to convert a string to uppercase

#include<stdio.h>
#include<string.h>
int main()
{
    char name[50]="ram";
    // name[0]=name[0]-32;
    // name[1]=name[1]-32;
    // name[2]=name[2]-32;
    // printf("%c%c%c", name[0], name[1],name[2]);
    // return 0;
//     for(i=0; name[i]!='\0'; i++)
//     {
//     if (name[i]>'a'&& name[i]>='z')
//     {
//     name[i]=name[i]-32;
// }
// }
strupr(name);
printf("Uppercase=%s", name);
   return 0;
}