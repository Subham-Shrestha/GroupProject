//10 WAP to use pointer to structure to read and display student details.
#include<stdio.h>
struct Student {
    int roll;
    char name[20];
};
int main() {
    struct Student s;
    struct Student *ptr = &s; 
    printf("Enter Roll No and Name: ");
    scanf("%d %s", &ptr->roll, ptr->name);
    printf("Roll: %d, Name: %s", ptr->roll, ptr->name);
    return 0;
}