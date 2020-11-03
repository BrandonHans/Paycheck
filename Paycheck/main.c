#include <stdio.h>

int main() {

    double tax1 = 0.15;
    double tax2 = 0.20;
    double tax3 = 0.25;
    double netPay;
    double taxes;
    double payCheck;
    int hoursWorked;
    double payRate = 12.00;
    double overtimePayRate = 18.00;
    double overtimePay;
    printf("Hello, enter the hours worked this week: ");
    scanf("%d", &hoursWorked);

    if (hoursWorked <= 40) {
        payCheck = hoursWorked * payRate;
    } else {
        payCheck = 40 * payRate;
        overtimePay = (hoursWorked - 40) * overtimePayRate;
        payCheck = payCheck + overtimePay;
    }

    if (payCheck <= 300) {
        taxes = payCheck * tax1;

    } else if (payCheck <= 450) {
        taxes = 300 * tax1;
        taxes += (payCheck - 300) * tax2;

    } else {
        taxes = 300 * tax1;
        taxes += 150 * tax2;
        taxes += (payCheck - 450) * tax3;

    }


    netPay = payCheck - taxes;


    printf("\nYour paycheck before taxes is $%.2f", payCheck);
    printf("\nYour paycheck after taxes is $%.2f", netPay);
    printf("\nYour taxes are $%.2f", taxes);

    return 0;
}
