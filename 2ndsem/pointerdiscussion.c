#include <stdio.h>

int main () {
     int var1,var2;
     printf("Address of var1 variable: %p\n", &var1 ); //shortcut to pointer/to display memory  address
     printf("Address of var2 variable: %p\n", &var2 );

     printf("\n---------------------");

     int num1=10,num2=15;
     int *pointer1=&num1, *pointer2=&num2; //proper pointer declaration
     printf("\nThe value of num1 = %d\nThe value of num2 = %d",num1,num2);
     printf("\nThe memory address of num1 = %p",pointer1);
     printf("\nThe memory address of num2 = %p",pointer2);
     printf("\n---------------------");
     printf("\nThe memory address of num1 = %d",*pointer1);
     printf("\nThe memory address of num2 = %d",*pointer2);

     printf("\n---------------------");

     printf("\nThe memory address of num1 = %p",&num1); //pointer using ampersand
     printf("\nThe memory address of num2 = %p",&num2);

     printf("\n---------------------\n---------------------\n---------------------");

     int a,b;
     int *p1=&a, *p2=&b; //proper pointer declarations
     printf("\nEnter value for variable A: ");
     scanf("%d",&a);
     printf("\nEnter value for variable B: ");
     scanf("%d",&b);
     printf("\nVariable A = %d\nVariable B = %d",a,b);

     printf("\nMemory Address of Var A = %p\nMemory Address of Var B = %p",&a,&b);//shortcut
     printf("\nMemory Address of Var A = %p\nMemory Address of Var B = %p",p1,p2);// proper
     printf("\nDisplay Value using C POINTERS");
     printf("\nValue of Var A = %d\nValue of Var B = %d",*p1,*p2);

     printf("\n------------------------\n");
     int *ptr=NULL; //NULL POINTER
     printf("\nNULL POINTER\n");
     printf("\nThe memory address of NULL pointer is %p",ptr); //or
     printf("\nThe memory address of NULL pointer is %d",ptr);

     printf("\n------------------------\n");
 return 0;

}
