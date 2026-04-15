//wap to check the greatest string among 3 string

#include<stdio.h>
#include<string.h>
int main()
{
    char name1[10]="ram";
    char name2[10]="ramesh";
    char name3[10]="subham";
    int len1, len2, len3;
    len1=strlen(name1);
    len2=strlen(name2);
    len3=strlen(name3);
    if(len1!=len2 && len1!=len3 && len2!=len3)
    {

    if(len1>len2&&len1>len3){
        printf("string 1st is the greatest");
    }
    else if(len2>len1&&len2>len3){
        printf("string 2nd is the greatest");
    }
    else{
        printf("string 3rd is the greatest");
    }
}
else{
    printf("Two number are same, cannot find greater string");
}
    return 0;
}
