#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("members.txt", "r");

    if (fp == NULL)
    {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    int id, age;
    int year, month, day; // NEW: date variables
    char plan[20], gen[10];
    char line[200];

    printf("\n");
    printf("┌──────┬──────────────────────┬─────┬────────┬──────────┬──────────┬────────────┐\n");

    // Skip first line (header)
    fgets(line, sizeof(line), fp);

    // Updated header for CSV format
    printf("│ %-4s │ %-20s │ %-3s │ %-6s │ %-8s │ %-8s │ %-10s │\n",
           "ID", "Full Name", "Age", "Gender", "Plan", "Status", "Join Date");

    printf("├──────┼──────────────────────┼─────┼────────┼──────────┼──────────┼────────────┤\n");

    // Read actual data (handle CSV format with commas)
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        char fullname[50], status[20], date[20];
        if (sscanf(line, "%d,%49[^,],%d,%9[^,],%19[^,],%19[^,],%19s",
                   &id, fullname, &age, gen, plan, status, date) == 7)
        {
            // Parse date
            sscanf(date, "%d-%d-%d", &year, &month, &day);
            printf("│ %-4d │ %-20s │ %-3d │ %-6s │ %-8s │ %-8s │ %04d-%02d-%02d │\n",
                   id, fullname, age, gen, plan, status,
                   year, month, day);
        }
    }

    printf("└──────┴──────────────────────┴─────┴────────┴──────────┴──────────┴────────────┘\n");

    fclose(fp);

    return 0;
}