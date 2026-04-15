//9 WAP to store student details using a nested structure.
#include<stdio.h>
struct Address {
    char city[20];
};
struct Student {
    char name[20];
    struct Address add; 
};
int main() {
    struct Student s;
    printf("Enter Name and City: ");
    scanf("%s %s", s.name, s.add.city); 
    printf("%s lives in %s", s.name, s.add.city);
    return 0;
}