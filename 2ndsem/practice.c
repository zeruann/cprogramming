#include<stdio.h>




int main(){

    int a=15;
    int *ptr=&a;


    printf("The memory address of A : %p\n",ptr); //proper

    printf("The memory address of A : %p\n", &a);
    printf("The memory address of A : %p\n", &a);


    printf("The memory address of A : %d\n", a);
    printf("The memory address of A : %p\n", ptr);



    return 0;
}
