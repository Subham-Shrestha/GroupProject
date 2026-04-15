//wap to check if two string are same or not

#include<stdio.h>
int main()
{
    char name1[10]="Ram";
    char name2[10]="Ram";
    printf("Memory address of name1=%d", name1);
    printf("Memory address of name2=%d", name2);
    
    if(name1==name2)
    {
        printf("same");
    }
    else{
        printf("not same");
    }
    return 0;
    
}