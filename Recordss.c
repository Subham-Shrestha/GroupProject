#include <stdio.h>
#include <string.h>

// Nested Structure 1: Name details
struct FullName {
    char firstName[20];
    char middleName[20];
    char lastName[20];
};

// Nested Structure 2: Date details
struct JoinDate {
    int year, month, day;
};

// Main Structure
struct Member {
    int memberID;
    struct FullName name;
    int age;
    char gender;
    char planType[10];
    int premiumStatus;
    struct JoinDate date;
};

// Function Prototypes
void inputMemberData(struct Member *m);
int calculatePrice(int premiumStatus);
void saveMemberToFile(FILE *fp, struct Member m, int price);

int main() {
    int n, i;

    printf("Enter the number of members to register: ");
    if (scanf("%d", &n) != 1) return 1;

    struct Member members[n];
    FILE *fp = fopen("newMembers.txt", "w");

    if (fp == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    // Write a Header to the file for better readability
    fprintf(fp, "ID\tName\t\t\tAge\tGen\tPlan\tPrem\tDate\t\tFee\n");
    fprintf(fp, "--------------------------------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("\n--- Entry for Member %d ---\n", i + 1);
        inputMemberData(&members[i]);
        
        int price = calculatePrice(members[i].premiumStatus);
        saveMemberToFile(fp, members[i], price);
        
        printf("Record saved! Total Fee: Rs. %d\n", price);
    }

    fclose(fp);
    printf("\nProcess complete. Data saved to 'members.txt'.\n");
    return 0;
}

// Logic to determine price
int calculatePrice(int premiumStatus) {
    // Premium = Rs. 1500, Normal = Rs. 500
    return (premiumStatus == 1) ? 1500 : 500;
}

// Function to handle the nested structure inputs
void inputMemberData(struct Member *m) {
    printf("Member ID: ");
    scanf("%d", &m->memberID);

    printf("First Name: ");
    scanf("%s", m->name.firstName);
    printf("Middle Name: ");
    scanf("%s", m->name.middleName);
    printf("Last Name: ");
    scanf("%s", m->name.lastName);

    printf("Age: ");
    scanf("%d", &m->age);

    printf("Gender (M/F): ");
    scanf(" %c", &m->gender); // Space before %c skips trailing newlines

    printf("Plan Type (Weekly/Monthly/Yearly): ");
    scanf("%s", m->planType);

    printf("Premium Status (1 for Premium, 0 for Normal): ");
    scanf("%d", &m->premiumStatus);

    printf("Join Date (YYYY MM DD): ");
    scanf("%d %d %d", &m->date.year, &m->date.month, &m->date.day);
}

// Function to write structured data to text file
void saveMemberToFile(FILE *fp, struct Member m, int price) {
    fprintf(fp, "%d\t%s %s %s\t%d\t%c\t%s\t%d\t%04d-%02d-%02d\tRs.%d\n",
            m.memberID,
            m.name.firstName, m.name.middleName, m.name.lastName,
            m.age,
            m.gender,
            m.planType,
            m.premiumStatus,
            m.date.year, m.date.month, m.date.day,
            price);
}