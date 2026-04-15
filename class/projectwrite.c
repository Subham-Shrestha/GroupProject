// #include<stdio.h>
// #include<string.h>
// //creating structure to store details of different type
// struct student{
//     int rollno;
//     char name[50];
//     char address[50];
//     char gender[20];
//     int age;
// };
// int main()
// {
//     //creating object of student
//     struct student std[10];
//     //accessing the file we make a file pointer
//     FILE *fp;
//     //to initialize the loop
//     int i;
//     //open a file
//     fp=fopen("structureData.txt","w");
//     //debugging if the program is running or not
//     //printf("Upto here working successfully");
//     //writing details of students
//     printf("Enter details of students:\n");
//     //for 24 student details we use loop
//     for (i=0;i<10;i++)

// {
//     printf("\nEnter details of %d students\n", i+1);
//     printf("Roll no= ");
//     scanf("%d",&std[i].rollno);

//     printf("\n Name= ");
//     scanf("%s",std[i].name);

//     printf("\n Address= ");
//     scanf("%s",std[i].address);

//     printf("\n gender= ");
//     scanf("%s",std[i].gender);

//     printf("\n Age= ");
//     scanf("%d",&std[i].age);

//     //writing whole line to the file
//     fprintf(fp,"%d %s %s %s %d\n", std[i].rollno, std[i].name, std[i].address, std[i].gender, std[i].age);
// }
// printf("Written in file successfully");
// //closing the file
// fclose(fp);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
struct student {
    int rollno;
    char name[50];
    char address[50];
    char gender[20];
    int age;
};
int main()
{
    //creating an object of student structure
    struct student std[10];
    //creating a file pointer to access as file
    FILE*fp;
    int i;
    //opening a file
    fp=fopen("structureData.txt","r");
    //checking if file exists or not
    if(fp==NULL)
    {
        printf("Unable to find file");
    }
    else{
        printf("Details are:\n");
        for (i=0;i<10;i++)
        {
            fscanf(fp,"%d %s %s %s %d", &std[i].rollno,&std[i].name, &std[i].address, &std[i].gender, &std[i].age);
           // printf("%d %s %s %s %d\n", std[i].rollno, std[i].name, std[i].address, std[i].gender, std[i].age);
        }
    }
    int max_age=std[0].age;
    int min_age=std[0].age;
    //comparing and replacing the max and min age
    for(i=0; i<10; i++)
    {
        if(max_age<std[i].age)
        {
            max_age=std[i].age;
        }
        if(min_age>std[i].age)
        {
            min_age=std[i].age;
        }
    }
    //displaying the max and min age
    printf("max age = %d\n",max_age);
    printf("min age = %d",min_age);
    //printing the data of max age student
    printf("Max age srudent details: ");
    for(i=0;i<10;i++);
    {
        if(max_age==std[i].age)
        {
            printf("roll no=%d name=%s address=%s gender=%s age=%d",std[i].rollno,std[i].name,std[i].address,std[i].gender,std[i].age);
}
}
//printing min age student detail
printf("min age student details:\n");
for(i=0;i<10;i++){
if(min_age==std[i].age){
printf("roll no=%d name=%s address=%s gender=%s age=%d",std[i].rollno,std[i].name,std[i].address,std[i].gender,std[i].age);

}
}

//graphics mode
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
rectangle(50,50,300,150);
//displaying the text inside rectangle
sprintf(text,"Highest Age student Details:");       //sprintf(destination,source)
outtext(60,60,text);                                //outtext
    
    fclose(fp);
    return 0;
}