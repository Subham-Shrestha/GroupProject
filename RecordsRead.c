#include<stdio.h>
struct Member
{
    int memberID; // Primary key as unique identifier
    char name[50];
    int age;
    char gender;
    char planType[10];  // "Weekly", "Monthly", or "Yearly"
    int premiumStatus,  // 1 for Premium, 0 for Basic
        joinDate_year,  // Use separate fields for simpler comparison
        joinDate_month, // Use to separate fields
        joinDate_day;   // Use to separate fields
};
int main(){
    struct Member member[24];
    FILE *fp;
    int i;
    /* Read from file */
    fp = fopen("members.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }

        printf("\n Member Records from File \n");

        for (i = 0; i < 24; i++)
        {

            fscanf(fp, "%d\t%s\t%d\t%c\t%s\t%d\t%d\t%d\t%d",
                &member[i].memberID,
                member[i].name,
                &member[i].age,
                &member[i].gender,
                member[i].planType,
                &member[i].premiumStatus,
                &member[i].joinDate_year,
                &member[i].joinDate_month,
                &member[i].joinDate_day);

            printf("\nMember %d\n", i + 1);
            printf("ID: %d\n", member[i].memberID);
            printf("Name: %s\n", member[i].name);
            printf("Age: %d\n", member[i].age);
            printf("Gender: %c\n", member[i].gender);
            printf("Plan: %s\n", member[i].planType);
            printf("Premium: %d\n", member[i].premiumStatus);
            printf("Join Date: %d-%d-%d\n",
                member[i].joinDate_year,
                member[i].joinDate_month,
                member[i].joinDate_day);
        }

        fclose(fp);
        return 0;
}