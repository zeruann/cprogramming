#include<stdio.h>
double calculateDiscount(double amount, double discountPercentage);
void displayFinalPrice(double amount, double discount);
int main()
{

    //DATATYPES
    double amount, discount, DiscountPercentage;
    char choice;

    do {
    printf("\n\n\t\t\t- - - - - - - - - - - - - - - - - - - - - - - - - -");
    printf("\n\t\t\t      WELCOME TO DISCOUNT CALCULATOR PROGRAM      \n");
    printf("\t\t\t- - - - - - - - - - - - - - - - - - - - - - - - - -\n");

    do {
        printf("\t\t\tEnter the purchase amount:\t");
        scanf("%lf", &amount);
            if (amount <= 0) {
                printf("\t\t\tInvalid input! Purchase amount must be greater than zero.\n");
            }
        } while (amount <= 0);


    printf("\t\t\tEnter the discount percentage:\t");
    scanf("%lf", &DiscountPercentage);

    if (DiscountPercentage > 0) {
            discount = calculateDiscount(amount, DiscountPercentage);
        }
        else {
            discount = 0; // No discount applied
        }

        displayFinalPrice(amount, discount);

    // Ask user if they want to calculate again
        printf("\n\t\t\tWould you like to calculate again? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');




    return 0;
}

double calculateDiscount(double amount, double discountPercentage)
{

    return (amount * discountPercentage) / 100.0;

}

void displayFinalPrice(double amount, double discount)
{
    double finalPrice = amount - discount;
    printf("\n\t\t\tOriginal Price: %.2f\n", amount);
    printf("\t\t\tDiscount Applied: %.2f\n", discount);
    printf("\t\t\tFinal Price: %.2f\n", finalPrice);

}
