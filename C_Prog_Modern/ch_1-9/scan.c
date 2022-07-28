#include <stdio.h>

int main()
{
    int itemNum, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &itemNum);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%-4.2f\t\t%2.2d/%2.2d/%4.4d\n", itemNum, price, day, month, year);

    return 0;
}