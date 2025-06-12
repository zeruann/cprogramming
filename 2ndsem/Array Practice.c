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
