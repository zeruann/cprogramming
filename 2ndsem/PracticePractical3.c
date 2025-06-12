

// Function prototypes
void inputGrades(int *grades, int size);
float computeAverage(int *grades, int size);
void displayResults(int *grades, int size, float avg);

int main() {
    int grades[5];  // Array to store 5 grades
    float avg;

    // Input grades
    inputGrades(grades, 5);

    // Compute average
    avg = computeAverage(grades, 5);

    // Display results
    displayResults(grades, 5, avg);

    return 0;
}

// Function to input grades
void inputGrades(int *grades, int size) {
    printf("Enter %d grades: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &grades[i]);
    }
}

// Function to compute the average grade
float computeAverage(int *grades, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    return (float)sum / size;
}

// Function to display grades and the average
void displayResults(int *grades, int size, float avg) {
    printf("\nGrades: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", grades[i]);
    }
    printf("\nAverage Grade: %.2f\n", avg);
}




/*

#include <stdio.h>
const int CITY = 3;
const int WEEK = 3;

int temperature[CITY][WEEK];
    // Storing values
     for (int i = 0; i < CITY; ++i) {

         for (int j = 0; j < WEEK; ++j) {
         printf("City %d, Day %d: ", i + 1, j + 1);
         scanf("%d", &temperature[i][j]);
         }

     }
     // Displaying values
     printf("\nDisplaying values: \n\n");

     for (int i = 0; i < CITY; ++i) {

         for (int j = 0; j < WEEK; ++j) {
         printf("City %d, Day %d = %d\n", i + 1, j + 1,
         temperature[i][j]);
         }

     }


 return 0;
}
*/






/*
#include<stdio.h>
void array_transfer(int numbers[5]);

int main() {



     int local_num[5];
     int counter = 0;
     while(counter < 5) {
         printf("Input Number %d: ", counter + 1);
         scanf("%d", &local_num[counter]);
         counter++;
     }
     array_transfer(local_num);

     return 0;


}



void array_transfer(int numbers[5]) {

 int counter = 0;
 while(counter < 5) {
    printf("\nArray Element [%d] = %d", counter, numbers[counter]);
    counter++;
}

}
*/


/*
    int a = 10;
    int *p = &a;
    *p = a;
    printf("%p\n", &a);
    printf("%d\n", *p);

    int *ptr = NULL;
    printf("The value of ptr is : %p\n", ptr);


    int c, *pc;
    c = 10;   // Initialize c
    pc = &c;  // Assign the address of c to pc
    *pc = c; // Modify c through the pointer

    printf("c = %d\n", c); // Output: c = 20
*/
/*

     int marks[5], i, n = 5, sum = 0, average;
     for(i = 0; i < n; ++i) {
     printf("Enter number %d: ", i + 1);
     scanf("%d", &marks[i]);
     sum += marks[i];
     }
     average = sum / n;
     printf("Average = %d", average);

*/


