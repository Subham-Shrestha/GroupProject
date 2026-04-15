#include <stdio.h>
#include <string.h>
int main()
 {
    FILE *fp;
    char name[50], oldest_name[50], youngest_name[50];
    int age;

    fp = fopen("members.txt", "r");

    if (fp == NULL) 
	{
        printf("Error opening file!\n");
        return 1;
    }

    
    // Read first record
    fscanf(fp, "%s %d", name, &age);

    int max_age = age;
    int min_age = age;

    strcpy(oldest_name, name);
    strcpy(youngest_name, name);

    // Read remaining records
    while (fscanf(fp, "%s %d", name, &age) == 2) 
      {

        if (age > max_age) {
            max_age = age;
            strcpy(oldest_name, name);
        }

        if (age < min_age) {
            min_age = age;
            strcpy(youngest_name, name);
        }
    }

    fclose(fp);

    printf("Oldest Member: %s (%d years)\n", oldest_name, max_age);
    printf("Youngest Member: %s (%d years)\n", youngest_name, min_age);

    return 0;
}