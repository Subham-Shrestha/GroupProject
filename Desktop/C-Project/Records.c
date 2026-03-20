#include<stdio.h>
struct Member
{
    int memberID; // Primary key as unique identifier
    char name[50];
    int age;
    char gender;
    char planType[10];  // "Weekly", "Monthly", or "Yearly"
    int premiumStatus, // 1 for Premium, 0 for Basic
    joinDate_year,  // Use separate fields for simpler comparison
    joinDate_month,  // Use to separate fields
    joinDate_day;   // Use to separate fields
};
int main(){
    struct Member member[24];
    FILE *fp;
    int i;

    /* Open file in write mode */
    fp = fopen("members.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }

    /* Input and write to file */
    for (i = 0; i < 24; i++)
    {

        printf("Member ID: ");
        scanf("%d", &member[i].memberID);

        printf("Name: ");
        scanf("%s", member[i].name);

        printf("Age: ");
        scanf("%d", &member[i].age);

        printf("Gender (M/F): ");
        scanf(" %c", &member[i].gender);

        printf("Plan Type: ");
        scanf("%s", member[i].planType);

        printf("Premium (1=Yes, 0=No): ");
        scanf("%d", &member[i].premiumStatus);

        printf("Join Date (YYYY MM DD): ");
        scanf("%d %d %d", &member[i].joinDate_year,
            &member[i].joinDate_month,
            &member[i].joinDate_day);
        printf("\n");    

        /* write record in text format */
        fprintf(fp, "%d\t%s\t%d\t%c\t%s\t%d\t%d\t%d\t%d\n",
            member[i].memberID,
            member[i].name,
            member[i].age,
            member[i].gender,
            member[i].planType,
            member[i].premiumStatus,
            member[i].joinDate_year,
            member[i].joinDate_month,
            member[i].joinDate_day);
    }

    fclose(fp);
    printf("\nData saved to file successfully.\n");
    return 0;
}
    