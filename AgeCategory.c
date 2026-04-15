#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp, *temp;
    char line[200];

    int count = 0;

    fp = fopen("members.txt", "r");
    temp = fopen("ageCategory.txt", "w");

    if (fp == NULL || temp == NULL)
    {
        printf("File error!\n");
        return 1;
    }

    int max_age = -1, min_age = 999;
    char oldest_name[50], youngest_name[50];

    // Terminal header
    printf("\n");
    printf(" ====== MEMBER AGE ANALYSIS ======\n\n ");
    printf("========================================================================\n");
    printf("|| ID   |  Name                |   Age |  Gender |  Plan     | Fee     ||\n");
    printf("-------------------------------------------------------------------------\n");

    // Skip header lines
    fgets(line, sizeof(line), fp);
    fgets(line, sizeof(line), fp);

    int oldest_id, youngest_id;
    int oldest_fee, youngest_fee;
    char oldest_gender, youngest_gender;
    char oldest_plan[10], youngest_plan[10];

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        int id, age, fee;
        char first[20], last[20], gender;
        char plan[10];

        sscanf(line, "%d %s %s %d %c %s %d",
               &id,
               first,
               last,
               &age,
               &gender,
               plan,
               &fee);

        char fullName[50];
        sprintf(fullName, "%s %s", first, last);

        // Check for oldest
        if (age > max_age)
        {
            max_age = age;
            strcpy(oldest_name, fullName);
            oldest_id = id;
            oldest_fee = fee;
            oldest_gender = gender;
            strcpy(oldest_plan, plan);
        }

        // Check for youngest
        if (age < min_age)
        {
            min_age = age;
            strcpy(youngest_name, fullName);
            youngest_id = id;
            youngest_fee = fee;
            youngest_gender = gender;
            strcpy(youngest_plan, plan);
        }
    }

    // Print oldest
    printf("||      |  ====== Oldest Member ====== |         |           |         ||\n");
    printf("|| %-4d | %-20s | %-5d | %-7c | %-9s | %-5d   ||\n",
           oldest_id,
           oldest_name,
           max_age,
           oldest_gender,
           oldest_plan,
           oldest_fee);

    // Save oldest
    fprintf(temp, "Oldest Member:\n");
    fprintf(temp, "%-4d | %-20s | %-5d | %-7c | %-9s | %-5d   ||\n\n",
            oldest_id,
            oldest_name,
            max_age,
            oldest_gender,
            oldest_plan,
            oldest_fee);

    // Print youngest
    printf("||      |====== Youngest Member ====== |         |           |         ||\n");
    printf("|| %-4d | %-20s | %-5d | %-7c | %-9s | %-5d   ||\n",
           youngest_id,
           youngest_name,
           min_age,
           youngest_gender,
           youngest_plan,
           youngest_fee);

    // Save youngest
    fprintf(temp, "Youngest Member:\n");
    fprintf(temp, "%-4d | %-20s | %-5d | %-7c | %-9s | %-5d   ||\n",
            youngest_id,
            youngest_name,
            min_age,
            youngest_gender,
            youngest_plan,
            youngest_fee);

    fclose(fp);
    fclose(temp);

    printf("=========================================================================\n");

    return 0;
}