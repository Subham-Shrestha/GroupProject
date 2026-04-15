//8 WAP to pass a structure to a function and display its members.
#include<stdio.h>
struct Data {
    int x;
};
int display(struct Data d) {
    printf("Value is: %d", d.x);
}
int main() {
    struct Data myData;
    myData.x = 25;
    display(myData); 
    return 0;
}