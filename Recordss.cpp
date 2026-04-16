#include <stdio.h>

struct Name {
    char first[20];
    char last[20];
};

struct Date {
    int year, month, day;
};

struct Member {
    int id;
    struct Name name;
    int age;
    char gender;
    char plan[15]; // Increased size slightly for safety
    int premium;
    struct Date joinDate;
};

int getFee(int premium) {
    return (premium == 1) ? 1500 : 500;
}

int main() {
    int n, i;

    printf("Enter number of members: ");
    if (scanf("%d", &n) != 1) return 1;

    struct Member m[n];
    FILE *fp = fopen("members.txt", "w");

    if (fp == NULL) {
        printf("File error!\n");
        return 1;
    }

    // Header with fixed widths for better alignment in the text file
    fprintf(fp, "%-5s %-25s %-5s %-5s %-12s %-8s %-12s\n", 
            "ID", "Name", "Age", "Gen", "Plan", "Fee", "Join Date");
    fprintf(fp, "--------------------------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("\n--- Member %d ---\n", i + 1);

        printf("ID: ");
        scanf("%d", &m[i].id);

        printf("First Name: ");
        scanf("%s", m[i].name.first);

        printf("Last Name: ");
        scanf("%s", m[i].name.last);

        printf("Age: ");
        scanf("%d", &m[i].age);

        printf("Gender (M/F): ");
        scanf(" %c", &m[i].gender); // Note the space before %c to skip whitespace

        printf("Plan: ");
        scanf("%s", m[i].plan);

        printf("Premium (1=yes, 0=no): ");
        scanf("%d", &m[i].premium);

        printf("Join Date (YYYY MM DD): ");
        scanf("%d %d %d", &m[i].joinDate.year, &m[i].joinDate.month, &m[i].joinDate.day);

        int fee = getFee(m[i].premium);

        // Combine first and last name for formatted output
        char fullName[41];
        snprintf(fullName, sizeof(fullName), "%s %s", m[i].name.first, m[i].name.last);

        // Using fixed widths (e.g., %-25s) ensures columns line up regardless of name length
        fprintf(fp, "%-5d %-25s %-5d %-5c %-12s %-8d %04d-%02d-%02d\n",
                m[i].id,
                fullName,
                m[i].age,
                m[i].gender,
                m[i].plan,
                fee,
                m[i].joinDate.year,
                m[i].joinDate.month,
                m[i].joinDate.day);

        printf("Saved successfully! Fee: Rs. %d\n", fee);
    }

    fclose(fp);
    printf("\nAll data saved in members.txt\n");
    return 0;
}