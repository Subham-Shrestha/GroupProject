#include<stdio.h>
int main()
{
    FILE *fp;
    int countPremium = 0, countNormal = 0;
    fp=fopen("members.txt","r");
    if(fp==NULL)
    {
        printf("Error opening file!");
        return 1;
    }
     
    int id,age,fee;
    char first[20],last[20],plan[10],gen;
    char line[200];

    printf("\n--- Premium Check ---\n\n");

    while(fgets(line, sizeof(line), fp)!= NULL)
    {
       sscanf(line, "%d %s %s %d %c %s %d",
    &id,
   first,
   last,
   &age,
   &gen,
   plan,
   &fee);
   if(strcmp(plan, "premium") == 0)
    {
        printf("Member ID: %d\n", id);
        printf("Name: %s %s\n", first, last);
        printf("Age: %d\n", age);
        printf("Gender: %c\n", gen);
        printf("Plan: %s\n", plan);
        printf("Fee: %d\n", fee);
        printf("--------------------\n");
        countNormal++;
    }
    else if(strcmp(plan, "normal") == 0)
    {
        printf("Member ID: %d\n", id);
        printf("Name: %s %s\n", first, last);
        printf("Age: %d\n", age);
        printf("Gender: %c\n", gen);
        printf("Plan: %s\n", plan);
        printf("Fee: %d\n", fee);
        printf("--------------------\n");
        countPremium++;
    }
    }
    printf("\n--- Summary ---\n");
    printf("Number of Premium Members: %d\n", countPremium);
    printf("Number of Normal Members: %d\n", countNormal);
}