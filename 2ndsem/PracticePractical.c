#include<stdio.h>

int main() {



    return 0;
}


/* Enter any number except for Zero -  enter zero to stop
    int number = 1;
    int sum = 0;

    while(number != 0)
    {
        printf("Enter a number (enter 0 to stop): ");
        scanf("%d", &number);

        if(number != 0)
        { // Only add non-zero numbers
            sum += number;
        }
    }

    printf("The sum is: %d\n", sum);*/


/* Sum of Odd Numbers
    int sum = 0;
    for(int i = 1; i<=100; i++){


        printf("%d\n",i);

        //odd numbers
        if(i%2!=0){
            sum+=i;
        }


   }

   printf("The sum of odd numbers: %d", sum);
*/



/*continue
    for(int i = 1; i<=10; i++)
    {
        if(i == 5){
            continue;
        }
        printf("%d\n",i);


    }*/


/* Enter 1 to continue or 2 to end
    int choice;
    do {

        printf("[1] for YES and [2] for No\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==2){
            break;
        }

    }while(choice==1);

*/


/*Accepts only odd numbers and ends if the user enters an even num
    int num;
    do
    {
        printf("Enter integer: ");
        scanf("%d",&num);
    }while(num%2!=0);

    printf("Inputed even value");
*/

/*Accepts only nonnegative numbers from the user and ends if the user enters a negative number
    float usernum;
    while(1==1) {
    printf("Enter number: ");
    scanf("%f",&usernum);

    if (usernum < 0 )
    {
        printf("Inputed Negative Value");
        break;
    }

}*/


/*Counts down from the user input to 0
    int num = 0;
    int usernum;

    printf("Enter number: ");
    scanf("%d",&usernum);

    while(num < usernum)
    {
        printf("%d\n",usernum);
        usernum--;
    }

*/
