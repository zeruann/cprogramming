#include<stdio.h>

//function prototypes
void addition(int arr1[], int arr2[]);
void subtraction(int arr1[], int arr2[]);
void multiplication(int arr1[], int arr2[]);
void division(int arr1[], int arr2[]);

int main()
{
    //predefined elements
    int arr1[] = {5, 10, 15, 20, 25};
    int arr2[] = {10, 20, 30, 40, 50};

    //iterate thru array 1
    printf("Array 1: ");
    for(int i = 0; i<5; i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");

    //iterate thru array 2
    printf("Array 2: ");
    for(int j = 0; j<5; j++){
        printf("%d ",arr2[j]);
    }

    //function call
    addition(arr1, arr2);
    printf("\n");
    subtraction(arr1, arr2);
    printf("\n");
    multiplication(arr1, arr2);
    printf("\n");
    division(arr1, arr2);
    printf("\n");

    return 0;
}

void addition(int arr1[], int arr2[])
{
    int sum;
    printf("\n\nAddition Result: ");
    for(int i = 0; i<5; i++){
        sum = arr1[i] + arr2[i]; //calculation
        printf("%d ", sum);//result
    }

}

void subtraction(int arr1[], int arr2[])
{
    int diff;
    printf("Subtraction Result: ");
    for(int i = 0; i<5; i++){
        diff = arr2[i] - arr1[i]; //calculation
        printf("%d ", diff);//result
    }

}

void multiplication(int arr1[], int arr2[])
{
    int product;
    printf("Multiplication Result: ");
    for(int i = 0; i<5; i++){
        product = arr1[i] * arr2[i]; //calculation
        printf("%d ", product);//result
    }

}

void division(int arr1[], int arr2[])
{
    float quotient;
    printf("Division Result: ");
    for(int i = 0; i<5; i++){
        quotient = arr2[i]/ arr1[i]; //calculation
        printf("%.1f ", quotient); //result
    }

}






