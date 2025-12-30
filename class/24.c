#include<stdio.h>
int main()
{
    int i,j,k,space=0;
    for(i=1; i<=4; i++)
    {
        for(j=1;j<=i; j++)
        {
            printf("  *");
        }
        space=0;
    
        printf("\n");
    }
    for(k=1; k<=space; k++)
    {
        printf("  ");
    }
        
            return 0;   
}   