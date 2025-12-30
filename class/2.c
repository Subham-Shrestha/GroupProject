//WAP to take input of a student of CSIT I sem marks on 3 subject(maths,DL,C)and calculate his/her totalmarks,percentage,grade,result(pass/fail)

#include<stdio.h>
int main()
{
    int Maths, DL, C;
    int total;
    float percentage;
    char Grade;
    char result[10];

    printf("Enter marks of Maths: ");
    scanf("%d", &Maths);

    printf("Enter marks of DL: ");
    scanf("%d", &DL);

    printf("Enter marks of C: ");
    scanf("%d", &C);

    total= Maths+DL+C;
    percentage= total*10/30;

    if(percentage>=90)
    {
    printf("Grade='A'\n ");
    }
     else if(percentage>=80)
     {
    printf("Grade='B'\n ");
    }
     else if(percentage>=70) 
    {
        printf("Grade='C'\n ");
    }
     else if(percentage>=60)
     {
    printf("Grade='D'\n ");
    }
     else if(percentage>=50)
     {
    printf("Grade='E'\n ");
    }
     else
     {
        printf("Grade:'F'\n ");
    }
    

     if(Maths>= 40 && DL>=40 && C>=40)
    {
        printf("Result:PASS\n ");
    }
    else
    {
        printf("Result:FAIL\n ");
    }

    printf("total marks=%d\n", total);
    printf("percentage=%.1f\n", percentage);
    

    return 0;

}