//WAP to take input of electricity unit & calculate the total bill amount to pay

    #include <stdio.h>
    int main() 
    {
    int unit;
    float bill;

    printf("Enter total electricity units consumed: ");
    scanf("%d", &unit);

    if (unit <= 50) {
        bill = 10 ;
    }
    else if (unit <= 150) {
        bill = 11;
    }
    else if (unit <= 250) {
        bill = 12;
    }
    else {
        bill = 15;
    }

    printf("Total Electricity Bill = Rs %.2f\n", bill);

    return 0;
}

