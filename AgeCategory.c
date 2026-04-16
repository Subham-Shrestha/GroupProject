#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp, *temp;
    char line[200];

    fp = fopen("members.txt", "r");
    temp = fopen("ageCategory.txt", "w");

    if (fp == NULL || temp == NULL)
    {
        printf("File error!\n");
        return 1;
    }

    int max_age = -1, min_age = 999;
    char oldest_name[50], youngest_name[50];
    char oldest_status[20], youngest_status[20];
    char oldest_date[20], youngest_date[20];

    // Terminal header
    printf("\n");
    printf("         MEMBER AGE ANALYSIS\n");
    printf("┌──────┬──────────────────────┬─────┬────────┬──────────┬──────────┬────────────┐\n");
    printf("│ %-4s │ %-20s │ %-3s │ %-6s │ %-8s │ %-8s │ %-10s │\n",
           "ID", "Full Name", "Age", "Gender", "Plan", "Status", "Join Date");
    printf("├──────┼──────────────────────┼─────┼────────┼──────────┼──────────┼────────────┤\n");

    // File header
    fprintf(temp, "\n         MEMBER AGE ANALYSIS\n");
    fprintf(temp, "┌──────┬──────────────────────┬─────┬────────┬──────────┬──────────┬────────────┐\n");
    fprintf(temp, "│ %-4s │ %-20s │ %-3s │ %-6s │ %-8s │ %-8s │ %-10s │\n",
            "ID", "Full Name", "Age", "Gender", "Plan", "Status", "Join Date");
    fprintf(temp, "├──────┼──────────────────────┼─────┼────────┼──────────┼──────────┼────────────┤\n");

    // Skip first line (header)
    fgets(line, sizeof(line), fp);

    int oldest_id, youngest_id;
    int year, month, day;
    char oldest_gender[10], youngest_gender[10];
    char oldest_plan[20], youngest_plan[20];

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        int id, age;
        char fullname[50], gender[10], plan[20], status[20], date[20];

        if (sscanf(line, "%d,%49[^,],%d,%9[^,],%19[^,],%19[^,],%19s",
                   &id, fullname, &age, gender, plan, status, date) != 7)
            continue;

        // Check for oldest
        if (age > max_age)
        {
            max_age = age;
            strcpy(oldest_name, fullname);
            oldest_id = id;
            strcpy(oldest_gender, gender);
            strcpy(oldest_plan, plan);
            strcpy(oldest_status, status);
            strcpy(oldest_date, date);
        }

        // Check for youngest
        if (age < min_age)
        {
            min_age = age;
            strcpy(youngest_name, fullname);
            youngest_id = id;
            strcpy(youngest_gender, gender);
            strcpy(youngest_plan, plan);
            strcpy(youngest_status, status);
            strcpy(youngest_date, date);
        }
    }

    sscanf(oldest_date, "%d-%d-%d", &year, &month, &day);
    printf("│ %-4d │ %-20s │ %-3d │ %-6s │ %-8s │ %-8s │ %04d-%02d-%02d │\n",
           oldest_id, oldest_name, max_age, oldest_gender, oldest_plan, oldest_status, year, month, day);

    fprintf(temp, "│ Oldest  │ %-20s │ %-3d │ %-6s │ %-8s │ %-8s │ %s │\n",
            oldest_name, max_age, oldest_gender, oldest_plan, oldest_status, oldest_date);

    sscanf(youngest_date, "%d-%d-%d", &year, &month, &day);
    printf("│ %-4d │ %-20s │ %-3d │ %-6s │ %-8s │ %-8s │ %04d-%02d-%02d │\n",
           youngest_id, youngest_name, min_age, youngest_gender, youngest_plan, youngest_status, year, month, day);

    fprintf(temp, "│ Youngest │ %-20s │ %-3d │ %-6s │ %-8s │ %-8s │ %s │\n",
            youngest_name, min_age, youngest_gender, youngest_plan, youngest_status, youngest_date);

    printf("└──────┴──────────────────────┴─────┴────────┴──────────┴──────────┴────────────┘\n");
    fprintf(temp, "└──────┴──────────────────────┴─────┴────────┴──────────┴──────────┴────────────┘\n");

    fclose(fp);
    fclose(temp);

    return 0;
}