#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char line[250];
    int count = 0;

    fp = fopen("members.txt", "r");
    if (fp == NULL)
    {
        printf("Error: Could not open members.txt!\n");
        return 1;
    }

    // Terminal header for the filtered list
    printf("\n         MEMBERS WHO JOINED AFTER 2025-01-01\n");
    printf("=========================================================================\n");
    printf("|| ID   | Name                 | Age | Gen | Join Date  | Fee      ||\n");
    printf("-------------------------------------------------------------------------\n");

    // Skip the two header lines in your text file
    fgets(line, sizeof(line), fp);
    fgets(line, sizeof(line), fp);

    // Variables to hold the data read from each line
    int id, age, fee;
    char first[20], last[20], gender, plan[15];
    int year, month, day;

    /* Matching your fprintf format: 
       "%d\t%s %s\t%d\t%c\t%s\t%d\n" 
       Note: We add the date parsing logic here.
    */
    while (fscanf(fp, "%d %s %s %d %c %s %d %d %d %d", 
           &id, first, last, &age, &gender, plan, &fee, &year, &month, &day) != EOF)
    {
        int isAfter = 0;

        // Logical Comparison for Date > 2025-01-01
        if (year > 2025) 
            isAfter = 1;
        else if (year == 2025) 
        {
            if (month > 1) 
                isAfter = 1;
            else if (month == 1 && day > 1) 
                isAfter = 1;
        }

        if (isAfter)
        {
            char fullName[40];
            sprintf(fullName, "%s %s", first, last);

            printf("|| %-4d | %-20s | %-3d | %-3c | %04d-%02d-%02d | %-8d ||\n",
                   id, fullName, age, gender, year, month, day, fee);
            
            count++;
        }
    }

    printf("=========================================================================\n");
    printf("Total Members Joined After 2025-01-01: %d\n\n", count);

    fclose(fp);
    return 0;
}
