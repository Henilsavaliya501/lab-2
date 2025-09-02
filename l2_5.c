#include <stdio.h>
int main() {
    float grossSales, discount, netSales;
    printf("Enter Gross Sales: ");
    scanf("%f", &grossSales);

    if (grossSales > 20000)
        discount = grossSales * 0.15;
    else if (grossSales > 10000)
        discount = grossSales * 0.10;
    else
        discount = grossSales * 0.05;

    netSales = grossSales - discount;
    printf("Net Sales = %.2f\n", netSales);
}
