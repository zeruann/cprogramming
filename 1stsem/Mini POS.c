#include<stdio.h>


int main(){

    //DATATYPES
    int menu1, menu2, menu3;
    float payment, change;
    float sum = 0;

    int choice;

    do{


            printf("--- Welcome! ---\n");
            printf("Type 1 for drinks\n");
            printf("Type 2 for desserts\n");
            printf("Type 3 for biscuits\n");
            printf("Type 4 to Exit the program\n");
            printf("Your choice: ");
            scanf("%d", &choice);

            //if the choice is 4
            if(choice==4)
            {
                printf("You have exited the menu\n");
                break;
            }


        switch(choice)
        {
            //for Drinks Menu
            case 1: {
            int drinks;
            float totalcoke = 0, totalpepsi = 0, totalroyal = 0;
            float coke = 30.00, pepsi = 25.00, royal = 20.00;


            printf("\n--- DRINKS!!! ---\n");
            printf("Type 1 for Coke : Php 30.00\n");
            printf("Type 2 for Pepsi : Php 25.00\n");
            printf("Type 3 for Royal : Php 20.00\n");
            printf("Type 4 to return to the main menu\n");
            printf("Your choice: ");
            scanf("%d", &drinks);

            switch (drinks) {
                case 1:
                    printf("How many cokes do you want?\n");
                    scanf("%d", &menu1);
                    totalcoke = menu1 * coke;
                    printf("%d Coke Total: Php %.2f\n", menu1, totalcoke);
                    sum += totalcoke;
                    break;
                case 2:
                    printf("How many pepsis do you want?\n");
                    scanf("%d", &menu1);
                    totalpepsi = menu1 * pepsi;
                    printf("%d Pepsi Total: Php %.2f\n", menu1, totalpepsi);
                    sum += totalpepsi;
                    break;
                case 3:
                    printf("How many royals do you want?\n");
                    scanf("%d", &menu1);
                    totalroyal = menu1 * royal;
                    printf("%d Royal Total: Php %.2f\n", menu1, totalroyal);
                    sum += totalroyal;
                    break;
                default:
                    printf("You have exited the submenu.\n");

            }
                break;
            }


            case 2:
            {
            int desserts;
            float totalstrawberrycake, totalcaramelcake, totalchococake;
            float strawberrycake = 40.00;
            float caramelcake = 30.00;
            float chococake = 35.00;

            printf("--- DESSERTS!!! ---\n");
            printf("Type 1 for Strawberry Cake : Php 40.00\n");
            printf("Type 2 for Caramel Cake : Php 30.00\n");
            printf("Type 3 for Chocolate Cake : Php 35.00\n");
            printf("Type 4 to exit the submenu\n");
            scanf("%d",&desserts);

                //Choice for Desserts
                switch(desserts)
                {
                    case 1:
                    printf("How many strawberry cakes do you want?\n");
                    scanf("%d",&menu2);
                    totalstrawberrycake = menu2 * strawberrycake;
                    printf("%d strawberry cakes Total : Php %.2f\n", menu2, totalstrawberrycake);
                    sum=sum+totalstrawberrycake;
                    break;

                    case 2:
                    printf("How many Caramel Cakes do you want?\n");
                    scanf("%d", &menu2);
                    totalcaramelcake=menu2*caramelcake;
                    printf("%d Caramel Cakes Total : Php %.2f\n", menu2, totalcaramelcake);
                    sum=sum+totalcaramelcake;
                    break;

                    case 3:
                    printf("How many Chocolate Cakes do you want?\n");
                    scanf("%d",&menu2);
                    totalchococake=menu2*chococake;
                    printf("%d Chocolate Cakes Total : Php %.2f\n", menu2, totalchococake);
                    sum=sum+totalchococake;
                    break;

                    default:
                    printf("You have exited the submenu.\n");


                }
                break;
            }

            case 3:
            {
            int biscuits;
            float totalfita, totalrebisco, totalhansel;
            float fita = 10.00;
            float rebisco = 9.00;
            float hansel = 8.00;

            printf("--- BISCUITS!!! ---\n");
            printf("Type 1 for fita : Php 10.00\n");
            printf("Type 2 for rebisco : Php 9.00\n");
            printf("Type 3 for hansel : Php 8.00\n");
            printf("Type 4 to exit the submenu\n");
            scanf("%d",&biscuits);

                //Choice for biscuits
                switch(biscuits)
                {
                    case 1:
                    printf("How many fitas do you want?\n");
                    scanf("%d",&menu3);
                    totalfita = menu3 * fita;
                    printf("%d Fita Total : Php %.2f\n", menu3, totalfita);
                    sum=sum+totalfita;
                    break;

                    case 2:
                    printf("How many rebiscos do you want?\n");
                    scanf("%d", &menu3);
                    totalrebisco=menu3*rebisco;
                    printf("%d Rebisco Total : Php %.2f\n", menu3, totalrebisco);
                    sum=sum+totalrebisco;
                    break;

                    case 3:
                    printf("How many hansel do you want?\n");
                    scanf("%d",&menu3);
                    totalhansel=menu3*hansel;
                    printf("%d hansel Total : Php %.2f\n", menu3, totalhansel);
                    sum=sum+totalhansel;
                    break;

                    default:
                    printf("You have exited the submenu.\n");

                }
                break;

            }
        }



        printf("Do you still want to order?\n");
        printf("Type 1 for Yes\n");
        printf("Type 2 to Pay\n");
        printf("Type 3 to cancel order\n");
        scanf("%d", &choice);

        if(choice==3)
        {
            printf("Thank you for coming by!\n");
            break;
        }

}while(choice == 1);


    if(choice==2){

        do {

            printf("Overall total of your order: Php %.2f\n",sum);
            printf("Your payment : ");
            scanf("%f",&payment);

            change = payment - sum;

            if(sum<payment){
                printf("Your change : %.2f\n", change);
                printf("You have successfully paid your order!\nThank you for ordering\n");
                break;
            }

            else if(sum > payment){
                printf("Your change : %.2f\n", change);
                printf("You have successfully paid your order!\nThank you for ordering\n");

            }


            else{
                printf("No change! %.2f\n",change);
                break;
            }


        } while(1==1);
    }



    return 0;
}


