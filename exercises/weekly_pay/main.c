#include <stdio.h>

int main() {
    int numHour;
    double grossPay;
    double taxes;
    double netPay;

    printf("Input the number of hours worked in a week: ");
    scanf("%i", &numHour);

    if (numHour <= 40) {
        grossPay = 12 * numHour;
    }
    else {
        grossPay = 40 * 12;
        double overtimePay = (numHour - 40) * (12 * 1.5);
        grossPay += overtimePay;
    }

    if (grossPay <= 300) {
        taxes = grossPay * 0.15;
    }
    else if (grossPay > 300 && grossPay <= 450) {
        taxes = 300 * 0.15;
        taxes += (grossPay - 300) * 0.20;
    }
    else {
        taxes = 300 * 0.15;
        taxes += 150 * 0.20;
        taxes += (grossPay - 450) * 0.25;
    }

    netPay = grossPay - taxes;

    printf("Gross pay: %.2f\n", grossPay);
    printf("Taxes: %.2f\n", taxes);
    printf("Net pay: %.2f\n", netPay);

    return 0;
}
