#include <stdio.h>

// Structure for Name
struct Name
{
    char first[20];
    char last[20];
};

// Structure for Date
struct Date
{
    int year, month, day;
};

// Main Structure
struct Member
{
    int id;
    struct Name name;
    int age;
    char gender;
    char plan[10];
    int premium; // 1 = yes, 0 = no
    struct Date joinDate;
};

// Function to calculate fee
int getFee(int premium)
{
    if (premium == 1)
        return 1500;
    else
        return 500;
}

int main()
{
    int n, i;

    printf("Enter number of members: ");
    scanf("%d", &n);

    struct Member m[n];

    FILE *fp;
    fp = fopen("members.txt", "w");

    if (fp == NULL)
    {
        printf("File error!\n");
        return 1;
    }

    fprintf(fp, "ID\tName\t\tAge\tGen\tPlan\tFee\n");
    fprintf(fp, "-------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("\nMember %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &m[i].id);

        printf("First Name: ");
        scanf("%s", m[i].name.first);

        printf("Last Name: ");
        scanf("%s", m[i].name.last);

        printf("Age: ");
        scanf("%d", &m[i].age);

        printf("Gender (M/F): ");
        scanf(" %c", &m[i].gender);

        printf("Plan (Weekly/Monthly/Yearly): ");
        scanf("%s", m[i].plan);

        printf("Premium (1=yes, 0=no): ");
        scanf("%d", &m[i].premium);

        printf("Join Date (YYYY MM DD): ");
        scanf("%d %d %d",
            &m[i].joinDate.year,
            &m[i].joinDate.month,
            &m[i].joinDate.day);
        int fee = getFee(m[i].premium);
        // Write to file
        fprintf(fp, "%d\t%s %s\t%d\t%c\t%s\t%d\n",
                m[i].id,
                m[i].name.first,
                m[i].name.last,
                m[i].age,
                m[i].gender,
                m[i].plan,
                fee);
        printf("Saved! Fee = Rs. %d\n", fee);
    }
    fclose(fp);
    printf("\nAll data saved in members.txt\n");
    return 0;
}