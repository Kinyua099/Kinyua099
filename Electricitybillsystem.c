#include <stdio.h>

int main() {
    float unit, total_bill;

    printf("Enter the total units consumed: ");
    scanf("%f", &unit);

    if (unit <= 50)
        total_bill = unit * 0.50;
    else if (unit <= 150)
        total_bill = 25 + (unit - 50) * 0.75;
    else if (unit <= 250)
        total_bill = 100 + (unit - 150) * 1.20;
    else
        total_bill = 220 + (unit - 250) * 1.50;

    printf("Total Electricity Bill: $%.2f", total_bill);

    return 0;
}

