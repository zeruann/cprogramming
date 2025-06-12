#include<stdio.h>
int main (){
    int number, numIncrement =1, sum=0;
    printf("\n\n\t ________________________________________________");
    printf("\n\n\t DO/WHILE LOOP Program to Calculate All Entered Numbers");
    printf("\n\t Enter numbers to add to the sum (-1 to stop)\n\n");

    do{
        // numIncrement - to continuously display numbers in order
        printf("\t Enter Number %d: ", numIncrement++);
        scanf("%d", &number);

            if(number!=-1) // condition to add all the numbers except -1
            sum+=number;
        }
    while(number !=-1); //loop stops if num value == -1


    printf("\n\n\t THE SUM IS %d ",sum);
    printf("\n\n\t ________________________________________________");
    printf("\n\n\n\n");


return 0;
}

    Number1(){

        int num, i, product;
        printf("\n\n\t ________________________________________________");
        printf("\n\n\t FOR LOOP Program to Display a Multiplication Table of Number");
        printf("\n\n\t + Enter a number: ");
        scanf("%d", &num);

        for(i=1; i<=10; i++){

            product=num*i;
            printf("\n\t\t  %d x %d  = %d", num, i, product);
    }
        printf("\n\n\t ________________________________________________");
        printf("\n\n\n");

}

    Number2(){

        int num, i, product;
        printf("\n\n\t ________________________________________________");
        printf("\n\n\t FOR LOOP Program to Display a Multiplication Table of Number");
        printf("\n\n\t + Enter a number: ");
        scanf("%d", &num);

        while(i<10){

            i++;
            product=num*i;
            printf("\n\t\t  %d x %d  = %d", num, i, product);
        }
        printf("\n\n\t ________________________________________________");
        printf("\n\n\n");

    }

    Number3(){

        int i,numIterate=1, num;
        int odd=0, even=0;
        //printf("Press Enter to Start");
        //getchar();
        printf("\n\n\t ________________________________________________");
        printf("\n\n\t WHILE LOOP Program to Calculate Odd and Even Numbers");

        printf("\n\t Enter numbers. Enter 0 to Stop.\n");
        printf("\n\t Enter Number %d:   ",numIterate++);
        scanf("%d",&num);

            if(num%2==0 && num!=0){
                    even++;

            } else if(num%2!=0 && num!=0){
                    odd++;
            }


        while(num!=0){
            printf("\t Enter Number %d:   ", numIterate++);
            scanf("%d",&num);

            if(num%2==0 && num!=0){
                    even++;
            }
            else if(num%2!=0 && num!=0){
                    odd++;
             }

            }
            printf("\n\t -------------------------");
            printf("\n\t Even Numbers:    %d ", even);
            printf("\n\t Odd Numbers:     %d ", odd);
            printf("\n\t ________________________________________________");
            printf("\n\n\n");
}

    Number4(){
        //DATATYPES
        int choice;
        float sumtotal, difftotal, producttotal, quototal;
        float num1, num2;

        printf("\n\n\t ________________________________________________");
        printf("\n\n\t DO/WHILE LOOP Program to Calculate Numbers");

        // Do WHILE LOOP
        do {

            printf("\n\t Select operation\n");
            printf("\t 1. Add\n");
            printf("\t 2. Subtract\n");
            printf("\t 3. Multiply\n");
            printf("\t 4. Divide\n");
            printf("\t 5. Exit\n");

            //User Input
            printf("\n\t Enter your choice: ");
            scanf("%d", &choice);

        switch(choice){

            case 1:
                //addition
                printf("\n\t Enter two numbers: ");
                scanf("%f%f",&num1, &num2);

                sumtotal = num1 + num2;
                printf("\t Result: %.2f\n\n", sumtotal);
                break;

            case 2:
                //subtraction
                printf("\n\t Enter two numbers: ");
                scanf("%f%f",&num1, &num2);

                difftotal = num1 - num2;
                printf("\t Result: %.2f\n\n", difftotal);
                break;

            case 3:
                //multiplication
                printf("\t Enter two numbers: ");
                scanf("%f%f",&num1, &num2);

                producttotal = num1 * num2;

                printf("\t Result: %.2f\n\n", producttotal);
                break;

            case 4:
                //division
                printf("\n\t Enter two numbers: ");
                scanf("\n\t %f%f",&num1, &num2);

                quototal = num1 / num2;
                printf("\t Result: %.2f\n\n", quototal);
                break;

            case 5:
                //program exits
            printf("\n\n\t ________________________________________________");
            printf("\n\n\n\n");
            return 0;

            //if the user did not choose the numbers 1-5, it will go back to the start
            //and let them choose again
            default:
                printf("\n\t Choose number 1-5 only\n");
            break;

}

            //Will terminate if the user inputs 5
            } while(choice!=5);

            printf("\n\n\t ________________________________________________");
            printf("\n\n\n\n");

}

    Number5(){

            int number,numberIterate=1, sum=0, total;
            printf("\n\n\t ________________________________________________");
            printf("\n\n\t DO/WHILE LOOP Program to Calculate All Entered Numbers");
            printf("\n\t Enter numbers to add to the sum (-1 to stop)\n\n");

            do{

                printf("\t   Enter Number %d: ", numberIterate++);
                scanf("%d", &number);

                if(number!=-1)
                    sum+=number;
                }

            while(number !=-1);

                printf("\n\n\t   THE SUM IS %d ",sum);
                printf("\n\n\t ________________________________________________");
                printf("\n\n\n\n");
}
