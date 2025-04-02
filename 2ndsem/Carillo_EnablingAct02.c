#include<stdio.h>

int main(){

    //variable declaration
    int n;


    //Ask the user how many numbers they want to enter (n).
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    //Declare an array of size n.
    int numbers[n];

    printf("Enter %d numbers: ", n);

    //Use a loop to take n inputs and store them in the array.
    for(int i=0; i < n; i++){

        scanf("%d",&numbers[i]);
    }

    //Initialize two variables (evenCount and oddCount) to zero.
    int evenCount = 0;
    int oddCount = 0;


    //Iterate through the array:
    //If array[i] % 2 == 0, increment evenCount.
    //Otherwise, increment oddCount.
     for (int i = 0; i < n; i++) {

        if(numbers[i] % 2 == 0){
            evenCount++;
        }
        else {
            oddCount++;
        }

    }


    //Display the counts of even and odd numbers
    printf("\nEven numbers: %d",evenCount);
    printf("\nOdd numbers: %d",oddCount);


    return 0;
}


//Made by Hazel Ann M. Carillo BSIT 1B
