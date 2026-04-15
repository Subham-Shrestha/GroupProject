//wap to find the no of lines from a file data.txt
// #include<stdio.h>
// void main(){
//      int line=0;
//      FILE *fp;
//      char ch;
//      fp=fopen("data.txt","r");
//      while(!feof(fp)){

//         ch=fgetc(fp);
//         if(ch=='\n'){
//             line++;
//         }
//      }
//      printf("no. of lines =%d",line);
//      fclose(fp);
// }

// //wap to save data of 3 employees to a file data.txt
// #include<stdio.h>
// void main(){
//      FILE *fp;
//      fp=fopen("data.txt","w");
//      fprintf(fp,"Ram ktm 50000\n");
//      fprintf(fp,"Kabir butwal 40000\n");
//      fprintf(fp,"Sandip sarlahi 30000\n");
//      fprintf(fp,"Raj pokhara 30000\n");
//      fclose(fp);
//  }//wap to print deatil of employee whose address is ktm from a file data.txt
// #include<stdio.h>
// #include<string.h>
// void main(){
//      int line=0,salary,count=0;
//      FILE *fp;
//      char name[100],add[100];
//      char ch;
//      fp=fopen("data.txt","r");
//      while(!feof(fp)){
//            ch=fgetc(fp);
//            if(ch=='\n'){
//             line++;
//            }
//      }
//            rewind (fp);
//            while(count<line){
//             fscanf(fp,"%s %s %d",&name,&add,&salary);
//            if(strcmp(add,"ktm")==0){
//                 printf("%s%s%d\n",name,add,salary);
//            count++;
//            }
//         }
//      fclose(fp);
// }

//STURCTURE
//wap to store details of employee(id,name,age) to a binary file
// #include<stdio.h>
// struct Employee{
// int id;
// char name[50];
// int age;
// };
// int main()
// {
// struct Employee emp;
// FILE*fp;
// fp=fopen("employee.dat", "wb");
// printf("Enter id, name and age of employee:\n");
// scanf("%d%s%d", &emp.id, &emp.name, &emp.age );
// fwrite(&emp,sizeof(emp), 1,fp);
// printf("Successfully");
// fclose(fp);
// return 0;
// }

// #include<stdio.h>
// struct Employee{
// int id;
// char name[50];
// int age;
// };

// int main()
// {
// struct Employee emp;
// FILE*fp;
// fp=fopen("employee.dat", "rb");
// fread(&emp, sizeof(emp), 1,fp);
// printf("details of employee is \n");
// printf("Id= %d ", emp.id);
// printf("Name=%s ", emp.name);
// printf("Age=%d", emp.age);
// fclose(fp);
// return 0;
// }

// #include<stdio.h>
// struct Employee{
// int id;
// char name[50];
// int age;
// };

// int main()
// {
// struct Employee emp[5];
// int i;
// FILE*fp;
// fp=fopen("employee.dat", "rb");
// fread(&emp, sizeof(emp), 1,fp);
// for(i=0; i<=5; i++)
// {
//     printf("details ")

// // printf("details of employee is \n");
// // printf("Id= %d ", emp.id);
// // printf("Name=%s ", emp.name);
// // printf("Age=%d", emp.age);
// }
// fclose(fp);
// return 0;
// }

//random access in file handling
// #include<stdio.h>
// int main()
// {
//     FILE*fp;
//     char ch;
//     fp=fopen("tu.txt", "r");
//     fseek(fp,1,SEEK_SET);
//     ch=fgetc(fp);
//     printf("%c",ch);
//     fclose(fp);
//     return 0;
// }

#include<stdio.h>
int main()
{
    FILE*fp;
    char ch;
    fp=fopen("tu.txt", "r");
    //fseek(fp,-1,SEEK_END);
    //ch=fgetc(fp);
    //fseek(fp,3,SEEK_SET);
    ch=fgetc(fp);
    printf("%c",ch);
    rewind(fp);
    int p_val=ftell(fp);
    printf("%d", p_val);
    fclose(fp);
    return 0;
}


