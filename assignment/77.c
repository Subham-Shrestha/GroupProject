//7 WAP to find and display the student with highest marks using structure.
#include<stdio.h>
struct Student {
    char name[20];
    float marks;
};

int main() {
    struct Student s[3];
    int i, highest = 0;

    for(i=0; i<3; i++) {
        printf("Enter name and marks for student %d: ", i+1);
        scanf("%s %f", s[i].name, &s[i].marks);
        if(s[i].marks > s[highest].marks) 
		{
            highest = i; 
        }
    }
    printf("Topper is %s with %.2f marks", s[highest].name, s[highest].marks);
    return 0;
}