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

    // Terminal header
    printf("\n");
    printf("         MEMBERS WITH %s PLAN\n", selectedPlan);
    printf("┌──────┬──────────────────────┬─────┬────────┬──────────┬──────────┬────────────┐\n");
    printf("│ %-4s │ %-20s │ %-3s │ %-6s │ %-8s │ %-8s │ %-10s │\n",
           "ID", "Full Name", "Age", "Gender", "Plan", "Status", "Join Date");
    printf("├──────┼──────────────────────┼─────┼────────┼──────────┼──────────┼────────────┤\n");

    // File header
    fprintf(temp, "\n\n         MEMBERS WITH %s PLAN\n", selectedPlan);
    fprintf(temp, "┌──────┬──────────────────────┬─────┬────────┬──────────┬──────────┬────────────┐\n");
    fprintf(temp, "│ %-4s │ %-20s │ %-3s │ %-6s │ %-8s │ %-8s │ %-10s │\n",
            "ID", "Full Name", "Age", "Gender", "Plan", "Status", "Join Date");
    fprintf(temp, "├──────┼──────────────────────┼─────┼────────┼──────────┼──────────┼────────────┤\n");

    // Ignore the header row and start reading data
    fgets(line, sizeof(line), fp);

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        int id, age, year, month, day;
        char fullname[50], gender[10], plan[20], status[20], date[20];

        if (sscanf(line, "%d,%49[^,],%d,%9[^,],%19[^,],%19[^,],%19s",
                   &id, fullname, &age, gender, plan, status, date) != 7)
            continue;

        sscanf(date, "%d-%d-%d", &year, &month, &day);

        if (strcmp(plan, selectedPlan) == 0)
        {
            // Output in terminal
            printf("│ %-4d │ %-20s │ %-3d │ %-6s │ %-8s │ %-8s │ %04d-%02d-%02d │\n",
                   id, fullname, age, gender, plan, status, year, month, day);

            // Store in file
            fprintf(temp, "│ %-4d │ %-20s │ %-3d │ %-6s │ %-8s │ %-8s │ %04d-%02d-%02d │\n",
                    id, fullname, age, gender, plan, status, year, month, day);

            count++;
        }
    }

    printf("└──────┴──────────────────────┴─────┴────────┴──────────┴──────────┴────────────┘\n");
    fprintf(temp, "└──────┴──────────────────────┴─────┴────────┴──────────┴──────────┴────────────┘\n");

    fclose(fp);
    fclose(temp);

    printf("\nTotal Members Found: %d\n", count);
    return 0;
}