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

    int id, age, fee;
    char first[20], last[20], plan[10], gen;
    char line[200];

    printf("\n--- Members Data ---\n\n");

    // Skip first 2 lines (header + dashed line)
    fgets(line, sizeof(line), fp);
    fgets(line, sizeof(line), fp);
    printf("==================================================================================\n");
    // Print clean header. 
    printf("|| %-3s | %-15s | %-15s | %-5s | %-5s | %-10s | %-5s ||\n", "ID", "First", "Last", "Age", "Gen", "Plan", "Fee"); //The numbers are written so that there will be fixed spacing between the columns for better reading of the file.
    // Note : The numbers in spacing were given to match the space evenly to make the output seem clean. 
    printf("----------------------------------------------------------------------------------\n");

    // Read actual data
    while (fscanf(fp, "%d %s %s %d %c %s %d", &id, first, last, &age, &gen, plan, &fee) != EOF)
    {
        printf("|| %-3d | %-15s | %-15s | %-5d | %-5c | %-10s | %-5d ||\n", id, first, last, age, gen, plan, fee);
    }
    printf("----------------------------------------------------------------------------------\n");

    fclose(fp);

    return 0;
}