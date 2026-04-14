#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp, *temp;
    char line[200];
    char selectedPlan[10];

    int count = 0;

    printf("Enter plan to filter (Weekly/Monthly/Yearly): ");
    scanf("%s", selectedPlan);

    fp = fopen("members.txt", "r");
    temp = fopen("planType.txt", "w");

    if (fp == NULL || temp == NULL)
    {
        printf("File error!\n");
        return 1;
    }

    // File header
    fprintf(temp, "Filtered Members (%s Plan)\n", selectedPlan);
    fprintf(temp, "ID   |  Name                |   Age |  Gender |  Plan     | Fee\n");
    fprintf(temp, "--------------------------------------------------------------------------------\n");

    // Terminal header
    printf("\n");
    printf("         MEMBERS WITH %s PLAN\n", selectedPlan);
    printf("=========================================================================\n");
    printf("|| ID   |  Name                |   Age |  Gender |  Plan     | Fee     ||\n");
    printf("-------------------------------------------------------------------------\n");

    // Ignore the header row and keep reading the datas.
    fgets(line, sizeof(line), fp);
    fgets(line, sizeof(line), fp);

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

        if (strcmp(plan, selectedPlan) == 0)
        {
            char fullName[50];
            sprintf(fullName, "%s %s", first, last);

            // Output in terminal
            printf("|| ");
            printf("%-4d | %-20s | %-5d | %-7c | %-9s | %-5d   ||\n",
                id,
                fullName,
                age,
                gender,
                plan,
                fee);

            // Store in file
            fprintf(temp, "%-4d | %-20s | %-5d | %-7c | %-9s | %-5d   ||\n",
                    id,
                    fullName,
                    age,
                    gender,
                    plan,
                    fee);

            count++;
        }
    }

    fclose(fp);
    fclose(temp);

    printf("=========================================================================\n");
    printf("Total Members Found: %d\n", count);
    return 0;
}