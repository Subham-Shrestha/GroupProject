//wap to present all students and skip7. suppose there are 24 students in a class. 

#include <stdio.h>
int main()
{
    int i;
    for(i=1; i<=24; i++)
    {
    if(i==7)
   {
    continue;
    }  
    printf("%d\n",i); 
 }
 return 0;
}