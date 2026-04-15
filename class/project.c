#include<stdio.h>
//creating structure to store details of different type
struct student{
    int rollno;
    char name[50];
    char address[50];
    char gender[20];
    int age;
};
int main()
{
    //creating object of student
    struct student std[10];
    //accessing the file we make a file pointer
    FILE *fp;
    //to initialize the loop
    int i;
    //open a file
    fp=fopen("structureData.txt","w");
    //debugging if the program is running or not
    printf("Upto here working successfully");
    return 0;
}