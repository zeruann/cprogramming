#include<stdio.h>

int main(){

        int num[4]; //fixed array size
        int number[]={100,200,300,400,500}; //predefined elements
        //int *p=&number[5]; //pointer declaration
        int *pointer[5]; //pointer array
        int sum=0;

         //(initialization;condition;increment)
        printf("\nEnter 4 integers: ");
        for(int i=0;i<4;i++){
            scanf("%d",&num[i]);
        }

        printf("\nThe values are:\n");
        for (int j=0;j<4;j++){
            printf("%d \t",num[j]);
        }

        printf("\n-----------------");
        printf("\nThe values of our second array is:\n");
        for (int x=0;x<5;x++){
            printf("%d \t",number[x]);
        }
-
        printf("\nThe value is %d",number[2]);
        printf("\n-----------------");

        for(int j=0;j<5;j++){
                pointer[j]=&number[j]; //pointer array
        }

        printf("\n-----------------");
        printf("\nThe memory addresses are"); //pointer array
        for(int j=0;j<5;j++){ //points to address
            printf("\nMemory address of index[%d] is %p",j,pointer[j]);//  (void *)pointer[j]
        }

        printf("\n-----------------");
        printf("\nThe elements of our array are:"); //pointer array
        for(int j=0;j<5;j++){
            printf("\nElement of index[%d] is %d",j,*pointer[j]); //points to value
        }

        printf("\n-----------------");
        for(int j=0;j<5;j++){
        sum+=number[j];

        }

        int average=sum/5;

        printf("\nThe sum of all elements = %d",sum);
        printf("\nThe average of elements = %d",average);
        printf("\n-----------------\n");

//main(); //
}
