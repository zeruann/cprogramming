#include <stdio.h>

int main() {
    int numItems;
    float price, total = 0, amountPaid, change;

    // Ask the user for the number of items
    printf("Enter the number of items: ");
    scanf("%d", &numItems);

    // Loop through each item to get its price
    for (int i = 1; i <= numItems; i++) {
        printf("Enter price for item %d: ", i);
        scanf("%f", &price);
        total += price;  // Add the price of the item to the total
    }

    // Display the total cost of all items
    printf("Total amount: %.2f\n", total);

    // Ask the user for the amount paid
    printf("Enter the amount paid: ");
    scanf("%f", &amountPaid);

    // Check if the amount paid is sufficient
    if (amountPaid < total) {
        printf("Insufficient amount! You need %.2f more.\n", total - amountPaid);
    } else {
        // Calculate and display the change to be returned
        change = amountPaid - total;
        printf("Change to be returned: %.2f\n", change);
    }

    return 0;
}
