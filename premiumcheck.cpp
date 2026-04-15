#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp, *out;
    char line[200];

    fp = fopen("members.txt", "r");
    out = fopen("premium.txt", "w");

    if (fp == NULL || out == NULL)
    {
        printf("Error opening file!\n");
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
        sscanf(line, "%d %s %s %d %c %s %d",
               &id, first, last, &age, &gen, plan, &fee);

        //  Filter using fee
        if (fee == 1500)
        {
            char fullName[50];
            sprintf(fullName, "%s %s", first, last);

            // Print to terminal
            printf("|| %-3d | %-19s | %-3d | %-6c | %-6d ||\n",
                   id, fullName, age, gen, fee);
            printf("-------------------------------------------------------\n");
            
// Write to file
            fprintf(out, "|| %-3d | %-19s | %-3d | %-6c | %-6d ||\n",
                    id, fullName, age, gen, fee);
            fprintf(out, "-------------------------------------------------\n");
        }
    }

    fclose(fp);
    fclose(out);

    printf("\nData stored in premium.txt successfully.\n");


}