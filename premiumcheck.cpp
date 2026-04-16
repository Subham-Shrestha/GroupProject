#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp, *out;
    char line[200];

    fp = fopen("members.txt", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Error opening input file: output/members.txt\n");
        return 1;
    }

    out = fopen("premium.txt", "w");
    if (out == NULL)
    {
        fprintf(stderr, "Error opening output file: output/premium.txt\n");
        fclose(fp);
        return 1;
    }

    int id, age, fee;
    char first[20], last[20], plan[10], gen;

    // HEADER
    printf("========== PREMIUM MEMBERS ==========\n");
    printf("-------------------------------------------------------\n");
    printf("|| ID  | Name                | Age | Gender | Fee    ||\n");
    printf("-------------------------------------------------------\n");

    fprintf(out, "========== PREMIUM MEMBERS ==========\n");
    fprintf(out, "-------------------------------------------------------\n");
    fprintf(out, "|| ID  | Name                | Age | Gender | Fee    ||\n");
    fprintf(out, "-------------------------------------------------------\n");

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        if (line[0] == '\0' || line[0] == '\n' || line[0] == '-' || strncmp(line, "ID", 2) == 0)
        {
            continue;
        }

        if (sscanf(line, "%d %19s %19s %d %c %9s %d",
                   &id, first, last, &age, &gen, plan, &fee) != 7)
        {
            continue;
        }

        if (fee == 1500)
        {
            char fullName[50];
            snprintf(fullName, sizeof(fullName), "%s %s", first, last);

            printf("|| %-3d | %-19s | %-3d | %-6c | %-6d ||\n",
                   id, fullName, age, gen, fee);
            printf("-------------------------------------------------------\n");

            fprintf(out, "|| %-3d | %-19s | %-3d | %-6c | %-6d ||\n",
                    id, fullName, age, gen, fee);
            fprintf(out, "-------------------------------------------------------\n");
        }
    }

    fclose(fp);
    fclose(out);

    printf("\nData stored in output/premium.txt successfully.\n");

    return 0;
}
