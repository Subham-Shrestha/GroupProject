// #include<stdio.h>
// struct student
// {
//     char name[20];
//     int roll;
//     float gpa;
// };

#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int roll;
    float gpa;
};
int main()
{
    struct student st;
    strcpy(st.name,"Surakshya");
    st.roll=23;
    st.gpa=4;

    printf("Name= %s\n",st.name);
    printf("Roll no= %d\n", st.roll);
    printf("GPA= %2.f", st.gpa);
    return 0;
}