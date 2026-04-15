//MALLOC()
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     int i;
//     ptr=(int*)malloc(5*sizeof(int));
//     ptr[0]=1;
//     ptr[1]=3;
//     ptr[2]=5;
//     ptr[3]=7;
//     ptr[4]=9;

//     for(i=0; i<5; i++){
//         printf("%d\n", ptr[i]);
//     }
//     return 0;
// }

//wap to allocate memory to store 5 prices.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     float *ptr;
//     int i;
//     ptr=(float*)malloc(5* sizeof(float));
//     ptr[0]=1;
//     ptr[1]=3;
//     ptr[2]=5;
//     ptr[3]=7;
//     ptr[4]=9;
//     for(i=0; i<5; i++){
//          printf("%f\n", ptr[i]);
//     }
//     return 0;
// }

//CALLOC()
//it initialize with 0
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     float *ptr;
//     int i;
//     ptr=(float*)calloc(5, sizeof(float));

//     for(i=0; i<5; i++){
//          printf("%f\n", ptr[i]);
//     }
//     return 0;
// }
//wap to allocate memory of size n inputed by the user
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     int i,n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     ptr=(int*)calloc(n, sizeof(int));
//     for(i=0; i<n; i++){
//          printf("%d\n", ptr[i]);
//     }
//     return 0;
// }

//FREE()
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     int i,n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     ptr=(int*)calloc(n, sizeof(int));
//     for(i=0; i<n; i++){
//          printf("%d\n", ptr[i]);
//     } 
//     free(ptr);
//     ptr=(int*)calloc(2, sizeof(int));
//     for(i=0; i<2; i++){
//          printf("%d\n", ptr[i]);
//     } 
//     return 0;
// }

//REALLOC()
//wap to allocate memory for 5 numbers then dynamically increase it to 8 numbers
#include<stdio.h>
#include<stdlib.h>  //not working
int main()
{
    int *ptr;
    int i;
    ptr=(int*) calloc(5, sizeof(int));

    printf("Enter numbers(5): ")
    for(int i=0; i<=5; i++){
        scanf("%d", &ptr[i]);
    }
    ptr=realloc(ptr,8);
    printf("Enter numbers(8): ")
    for(int i=0; i<=8; i++){
        scanf("%d", &ptr[i]);
    }
    for( int i=0; i<=8; i++){
        printf("Number %d is %d\n", i,ptr[i];)
    }
    return 0;
}