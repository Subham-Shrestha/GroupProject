 //wap to store name, roll no, age of a student in s structure and display them

//  #include<stdio.h>
//  #include<string.h>
//  struct student
//  {
//     int roll_no;
//     char name[20];
//     int age;
//  };
//  int main()
//  {
//     struct student std;
//     std.roll_no=23;
//     strcpy(std.name,"Surakshya");
//    std.age=18;
//    printf("Detail of the student:\n");
//    printf("Name= %s\n", std.name);
//    printf("Roll_no= %d\n",std.roll_no);
//    printf("Age= %d",std.age);
//     return 0;
    
//  }
//take all in one place
// #include<stdio.h>
// #include<string.h>
// struct student
// {
//    int roll_no;
//    char name[20];
//    int age;
//  };
//  int main()
//  {
//     struct student std={23, "Surakshya", 18};
//    printf("Detail of the student:\n");
//    printf("Name= %s\n", std.name);
//    printf("Roll_no= %d\n",std.roll_no);
//    printf("Age= %d",std.age);
//     return 0;   
//  }
//take input
// #include<stdio.h>
// #include<string.h>
// struct student
// {
//    int roll_no;
//    char name[20];
//    int age;
//  };
//  int main()
// {
//    struct student std;
//    printf("enter roll_no, name, age:");
//    scanf("%d", &std.roll_no);
//    scanf("%s", &std.name);
//    scanf("%d", &std.age);
//    printf("Detail of the student:\n");
//     printf("Name= %s\n", std.name);
//     printf("Roll_no= %d\n",std.roll_no);
//     printf("Age= %d",std.age);
//      return 0;
// }
 //wap to input details of a employee  
// #include<stdio.h>
// #include<string.h>
// struct employee
// {
//    char name[20];
//    int id;
//    int salary;
//  };
//  int main()
// {
//    struct employee emp;
//    printf("enter name, id, salary:");
//    scanf("%s", &emp.name);
//    scanf("%d", &emp.id);
//    scanf("%d", &emp.salary);

//    printf("Detail of the employee:\n");
//    printf("Name= %s\n", emp.name);
//    printf("id= %d\n",emp.id);
//    printf("salary= %d",emp.salary);

//    return 0;
// }
//wap to input detail of the book
// #include<stdio.h>
// #include<string.h>
// struct book
// {
//    char name[20];
//    int id;
//    int price;
//  };
//  int main()
// {
//    struct book b;
//    printf("enter name, id, price:");
//    scanf("%s", &b.name);
//    scanf("%d", &b.id);
//    scanf("%d", &b.price);
//    printf("Detail of the book:\n");
//    printf("Name= %s\n", b.name);
//    printf("id= %d\n",b.id);
//    printf("Price= %d",b.price);
//    return 0;
// }
   

//LOOP IN STRUCTURE
//Wap to store details of 3 students and display them
// #include<stdio.h>
// #include<string.h>
// struct student
// {
//    int roll_no;
//    char name[20];
//    int age;
// };
// int main()
// {
//    int i;
//    struct student std[3];
//    printf("Enter details of 3 students:\n");
//    for(i=0;i<3;i++)
//    {
//       scanf("%d", &std[i].roll_no);
//       scanf("%s",&std[i].name);
//       scanf("%d",&std[i].age);
//    }
//    printf("Details of 3 student are:\n");
//    printf("Roll_no\t name\t age\n");
//    for(i=0;i<3;i++)
//    int y_age = std[0].age;
//    if(y_age==std[i].age)
//    {
//    printf("%d\t",std[i].roll_no);
//    printf("%s\t",std[i].name);
//    printf("%d\t",std[i].age);
//    printf("\n");
//    }
//    //younger student
//    int y_age=std[0].age;
//    for(i=0;i<3;i++)
//    {
//       if(std[i].age<y_age)
//       {
//          y_age=std[i].age;
//       }
//    }
//    printf("Younger=%d", y_age);
   //if(y_age==std[i].age)
   
//    return 0;
// }

//wap to store details of 5 employees and display of highest paid salary
// #include <stdio.h>
// #include <string.h>
// struct Employee 
// {
//     int id;
//     char name[20];
//     int salary;
// };
// int main()
// {
//     struct Employee emp[5];
//     int i;
//       printf("Enter ID ,Name and Salary of Employee: ");
//       for(i = 0; i < 5; i++)
//    {
//       scanf("%d", &emp[i].id);
//       scanf("%s", &emp[i].name);
//       scanf("%d", &emp[i].salary);
//    }
//    int highest_salary=emp[0].salary;
//    printf("Highest Paid Employee:\n");
//    // printf("name= %s\n", emp[i].name);
//    // printf("Salary = %d\n", emp[i].salary);
//    //printf("details of highest paid salaries are ");
//    // printf("id\t");
//    // printf("name\t");
//    // printf("salary\n");
// for(i=0;i<5;i++)
// {
//    if(emp[i].salary>highest_salary){
//       //printf("%d\t %s\t %d\n",emp[i].id,emp[i].name,emp[i].salary);
//       highest_salary=emp[i].salary;
//       }
//    }
//       for(i=0;i<5;i++){
//       if(highest_salary==emp[i].salary){
//          printf("Id=%d\n", emp[i].id);
//          printf("name= %s\n", emp[i].name);
//          printf("Salary = %d\n", emp[i].salary);
//       }
//       }
//         return 0;
//       }

//wap to print the birthday of the student
// #include<stdio.h>
// struct student{
//    int rollno;
//    char name[20];
//    struct birthdate{
//       int dd,mm,yy;
//    }
// };
// int main()
// {
//    struct student std;
//    printf("Enter rollno, name and birthday(dd-mm-yy): ");
//    scanf("%d",&std.rollno);
//    scanf("%s",&std.name);
//    scanf("%d",&std.dob.dd);
//    scanf("%d",&std.dob.mm);
//    scanf("%d",&std.dob.yy);
//    printf("rollno=%d", std.rollno);
//    printf("name=%s", std.name);
//    printf("Date of birth=%d-%d-%d",std.dob.mm,std.dob.dd,std.dob.yy);
//    return 0;
// }
//pointer to a structure
// #include<stdio.h>
// struct student{
//    int roll_no;
//    char name[20];
//    int age;
// };
// int main()
// {
//    struct student std;
//    struct student *p;
//    p=&std;
//    printf("enter details(roll_no, name, age): ");
//    scanf("%d",&std.roll_no);
//    scanf("%s", std.name);
//    scanf("%d", &std.age);
//    printf("The details of the students are:\n ");
//    printf("Roll_no= %d\t", p->roll_no);
//    printf("Name= %s\t", p->name);
//    printf("Age= %d\t", p->age);
//    return 0;
// }

