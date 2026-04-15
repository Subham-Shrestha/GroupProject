//5 WAP to define a structure Students and display its details.
#include<stdio.h>
struct Students {
    int id;
    char name[20];
};
int main() {
    struct Students s;
    printf("Enter ID and Name: ");
    scanf("%d %s", &s.id, s.name);
    printf("ID: %d, Name: %s", s.id, s.name);
    return 0;
}