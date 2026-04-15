//wap to write "Ram" to a file.txt
// #include<stdio.h>
// int main()
// {
//     int i;
//     char name[20]="Ram";
//     FILE *fp;
//     fp=fopen("name.txt","w");
//     for(i=0; name[i]!='\0'; i++)
//     {
//        fputc(name[i], fp); 
//     }
//     printf("Written in file successful");
//     fclose(fp);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i;
//     char ch;
//     FILE *fp;
//     fp=fopen("abc.txt","r");
//     while(!feof(fp))
//     {
//         ch=fgetc (fp);
//         printf("%c", ch);
//     }
//     fclose(fp);
//     return 0;
// }

//wap to input your name and store it into a file yourname.txt(write)

// #include<stdio.h>
// int main()
// {
//     int i; 
//     char name[20];
//     printf("Enter your name: ");
//     scanf("%c", &name);
//     FILE *fp;
//     fp=fopen("yourname.txt", "w");
//     for(i=0; name[i]!='\0'; i++)
//     {
//         fputc(name[i], fp);
//     }
//     printf("AHAHAHAHAHA");
//     fclose(fp);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i;
//     char ch;
//     FILE *fp;
//     fp=fopen("yourname.txt","r");
//     while(!feof(fp))
//     {
//         ch=fgetc (fp);
//         printf("%c", ch);
//     }
//     fclose(fp);
//     return 0;
// }

//tu University in tu.text
// #include<stdio.h>
// int main()
// {
//     int i; 
//     char name[50];
//     printf("Enter your uni name: ");
//     scanf("%c", &name);
//     FILE *fp;
//     fp=fopen("tu.txt", "w");
//     for(i=0; name[i]!='\0'; i++)
//     {
//         fputc(name[i], fp);
//     }
//     printf("AHAHAHAHAHA");
//     fclose(fp);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i;
//     char ch;
//     FILE *fp;
//     fp=fopen("tu.txt","r");
//     if(fp==NULL)
//     {
//         printf("NO FILE FOUND");
//     }
//     else{
//     while(!feof(fp))
//     {
//         ch=fgetc (fp);
//         printf("%c", ch);
//     }
// }
//     fclose(fp);
// #include<stdio.h>
// int main()
// {
//     int i;
//     // char ch;
//     char coll_name[20]="Orchid";
//     FILE *fp;
//     fp=fopen("tu.txt","a");
//     if(fp==NULL)
//     {
//         printf("NO FILE FOUND");
//     }
//     else{
//     for(i=0; coll_name[i]!='\0'; i++)
//     fputc(coll_name[i],fp);
// }
//     fclose(fp);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i;
//     char ch;
//     char coll_name[20]=" Orchid";
//     FILE *fp;
//     fp=fopen("tu.txt","r");
//     if(fp==NULL)
//     {
//         printf("NO FILE FOUND");
//     }
//     else{
//         while(!feof(fp))
//         {
//             ch=fgetc(fp);
//             printf("ahahahha");
//         }
//     }
//     fclose(fp);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i;
//     char ch;
//     char coll_name[20]=" Orchid";
//     FILE *fp;
//     fp=fopen("tu.txt","r");
//     if(fp==NULL)
//     {
//         printf("NO FILE FOUND");
//     }
//     else{
//         while(!feof(fp))
//         {
//             ch=fgetc(fp);
//         }
//     }
//     fclose(fp);
//     return 0;
// }

//wap to input your current address and store it in address.txt and then append your
// permanent address to the file and check the no of vowels and consonents the file has
//WAP to input your current address and store it in address.txt file 
// #include<stdio.h>
// int main(){
// 	int i;
// 	char address[50]="Kathmandu";
// 	FILE *fp;
// 	fp=fopen("address.txt","w");
// 	for(i=0; address[i]!='\0'; i++)
// 	{
// 	fputc(address[i], fp);
// 	}
// 	printf("Written successfully.");
// 	fclose(fp);
//     return 0;
// }

//then append your permanent address to the file.
// #include<stdio.h>
// int main(){
// int i;
// 		char address[50]="Bhadrapur";
// 			FILE *fp;
// 		fp=fopen("address.txt","a");
// 	if(fp==NULL){
// 		printf("No File Found.");}
// 	else{
// 		for(i=0; address[i]!='\0'; i++){
// 			fputc(address[i],fp);
// 		}
// 	}
// 	fclose(fp);
//     return 0;
// }

//and check the no. of vowels and consonents the file has.
// #include<stdio.h>
// int main(){
// 	char ch;
// int i, c_count=0, v_count=0;
// 	FILE *fp;
// 	fp=fopen("address.txt","r");
// 	if(fp==NULL){
// 		printf("No File Found.");}
// 	else{
// 		while(!feof(fp)){
// 			ch=fgetc(fp);
// 	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')	      
// 	{
// 	v_count++;
// 	}
// 	else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
//     {
//     c_count++;
//     }
// 	}
// 	}	
// 	printf("No. of vowels = %d\n", v_count);
// 	printf("No. of consonents = %d", c_count);
// 	fclose(fp);
//     return 0;
// }

//wap to input sentence and store in the sentence.txt then copy all vowel from 
// the sentence.txt to vowel.txt and consonent.txt

// #include<stdio.h>
// int main()
// {
// 	char ch[50];
// 	int i;
// 	printf("Enter a sentence: ");
// 	fgets(ch, sizeof(ch),stdin);
// 	//gets(ch)
// 	FILE *fp;
// 	fp=fopen("sentence.txt", "w");
// 	for(i=0; ch[i]!='\0'; i++)
//     {
//         fputc(ch[i], fp);
//     }
//     printf("AHAHAHAHAHA");
// 	fclose(fp);
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	char ch[50];
// 	int i;
// 	FILE *fp;
// 	fp=fopen("sentence.txt", "r");
// 	if(fp==NULL)
// 	{
// 		printf("File not found");
// 	}
// 	else
// 	{
// 		printf("File read sucessfully");
// 	}
// 	while(!feof(fp))
// 	{
// 		ch=fgetc(fp);
// 		printf("%c", ch);
// 	}
// 	fclose(fp);
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	char ch[50];
// 	int i;
// 	FILE *fp;
// 	FILE *up;
// 	FILE *cp;
// 	fp=fopen("sentence.txt", "r");
// 	if(fp==NULL)
// 	{
// 		printf("File not found");
// 	}
// 	else
// 	{
// 		printf("File read sucessfully");
// 	while(!feof(fp))
// 	{
// 		ch=fgetc(fp);
// 		if (ch=='a'||ch=='e'||ch =='i'||ch == 'o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
// 		{
// 	fputc(ch,up);
// 	}
// 	else
//     {
// 	fputc(ch,cp);
//     }
// }
// 	fclose(fp);
// 	fclose(up);
// 	fclose(cp);
// 	return 0;
// }
// }

//wap to print 10 character only from file sentence.txt
//wap to copy the content of the tu.text to "university.txt"
// #include<stdio.h>
// int main()
// {
// 	char ch;
// 	int i;
// 	FILE *fp, *vp;
// 	fp=fopen("tu.txt","r");
// 	vp=fopen("university.txt","w");
// 	if(fp==NULL){
// 		printf("No File Found.");}
// 	else{
// 		while(!feof(fp)){
// 		ch=fgetc(fp);
// 		while (!feof(fp)) {
//             ch = fgetc(fp);
//             if (!feof(fp)) {
//                 fputc(ch, vp);
//             }
// 	}
// 	}
// 		printf("Copied successfully.");
//         fclose(fp);
//         fclose(vp);
// }
// return 0;
// }

//WAP to copy the content of tu.txt to "university.txt".
// #include<stdio.h>
// #include<conio.h>
// void main()
// {
// FILE *fp;
// 	char ch;
// 	int i;
// 	char uni[100]="Tribhuvan University";
// 	fp=fopen("universityy.txt","w+");
// 	for(i=0; uni[i]!='\0'; i++)
// 	{
// 		fputc(uni[i], fp);
// 	}
// 	printf("Written successfully.\n");
// 	rewind(fp);
// 	printf("Details of file:");
// 		while (!feof(fp)) {
//             ch = fgetc(fp);
//            printf("%c", ch);    
// 			}
//         fclose(fp);
// }


// #include<stdio.h>
// int main()
// {
// FILE *fp;
// 	char ch;
// 	int i;
// 	char caste [10]="Poudel";
// 	fp=fopen("name.txt","r+");
// 	if(fp==NULL)
// 	{
// 	}
// 	printf("Details of file: ");
// 		while (!feof(fp)) {
//             ch = fgetc(fp);
//            printf("%c", ch);    
// 			}
// 			for(i=0; caste[i]!='\0'; i++)
// 	{
// 		fputc(caste[i],fp);
// 	}
// 	printf("Written successfully.\n");
	
//         fclose(fp);
// return 0;
// }

#include<stdio.h>
int main()
{
FILE *fp;
	char ch;
	int i;
	char caste [10]="Poudel";
	fp=fopen("name.txt","r+");
	if(fp==NULL)
	{
	}
	printf("Details of file: ");
		while (!feof(fp)) {
            ch = fgetc(fp);
           printf("%c", ch);    
			}
			for(i=0; caste[i]!='\0'; i++)
	{
		fputc(caste[i],fp);
	}
	printf("Written successfully.\n");
	
        fclose(fp);
return 0;
}
