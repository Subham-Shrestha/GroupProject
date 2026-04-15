//6 WAP to store and display details of N students using an array of structures.
#include<stdio.h>
struct Student {
    int roll;
    char name[20];
};
int main() {
    struct Student s[100]; 
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        printf("Enter Roll No and Name for student %d: ", i+1);
        scanf("%d %s", &s[i].roll, s[i].name);
    }
    for(i=0; i<n; i++) {
        printf("Roll: %d\n Name: %s\n", s[i].roll, s[i].name);
    }
    return 0;
}