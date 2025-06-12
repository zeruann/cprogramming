#include<stdio.h>

int main()
{

    int arr[5]; //fixed array size

    printf("Enter 5 integers: \n");

    for(int i = 0; i <5;i++){
        printf("Element %d : ",i); //start with Element 0
        scanf("%d",&arr[i]); // User Input
    }

    for(int j = 0; j<5; j++){
        printf("\nIndex %d : Value: %d , Memory Address : %p", j, arr[j], &arr[j]); // Result
    }

    return 0;
}
