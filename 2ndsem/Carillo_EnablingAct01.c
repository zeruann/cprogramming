#include<stdio.h>

int main(){

    //variable declaration
    int numofelem;

    //Ask the user how many numbers they want to enter (n).
    printf("\nEnter the number of elements: ");
    scanf("%d",&numofelem);

      // Declare an array of size n.
    int numbers[numofelem];


     //Use a loop to take n inputs from the user and store them in the array.
    for(int i=0; i<numofelem; i++)
    {
        printf("Enter number: %d: ", i+1);
        scanf("%d",&numbers[i]);
    }


    // Initialize two variables (max and min) to store the largest and smallest numbers.
    int max = numbers[0];
    int min = numbers[0];


    // Iterate through the array
    for (int i = 1; i < numofelem; i++) {

        //Compare each number with max and update max if the number is greater.
        if (numbers[i] > max) {
            max = numbers[i];
        }
        //Compare each number with min and update min if the number is smaller.
        if (numbers[i] < min) {
            min = numbers[i];
        }

    }

    // Display the largest and smallest numbers
    printf("The largest number is: %d\n", max);
    printf("The smallest number is: %d\n", min);


    return 0;
}




//Made by Hazel Ann M. Carillo BSIT 1B
