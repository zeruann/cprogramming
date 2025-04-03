#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char name[30];
    int age;
    int grades[5];
    int choice;
    char fname[25];
    char lname[25];

    do {

    FILE *file=fopen("D:\\student.txt","a"); //append

    if(file==NULL){
        printf("File does not exist!");
        return 1;
    }
    int sum = 0;
    int result=0;
    printf("\n\nDETAILS OF THE STUDENT\n\n");

    printf("Name:\t\t");
    fgets(fname,sizeof(fname),stdin);
    fname[strcspn(fname,"\n")]=0;

    printf("Last Name:\t");
    fgets(lname,sizeof(lname),stdin);
    lname[strcspn(lname,"\n")]=0;


    printf("\n");
    for(int i=0; i<5; i++){
        printf("Enter grade for Activity 0%d: ",i+1);
        scanf("%d",&grades[i]);
        sum += grades[i];
        result = sum/5;
    }

    system("cls");
    fprintf(file,"\n\n=================================================\n");
    fprintf(file,"                 STUDENT RECORD                  \n");
    fprintf(file,"=================================================\n\n");
    fprintf(file,"Student Name: %s %s\n",strupr(fname),strupr(lname));


    for(int j=0; j<5; j++){
        fprintf(file,"Score for Activity 0%d: %d",j+1, grades[j]);
        fprintf(file,"\n");
    }

    fprintf(file,"\nThe Final Grade is %d\n",result);

    printf("\nThe Final Grade is %d\n",result);
    printf("=========================================\n\n\n");
    fclose(file);
    printf("\nData saved successfully!");
    printf("Do you want to another transaction?\n");
    printf("[1] Yes\n");
    printf("[2] No\n");
    scanf("%d",&choice);
    getchar();

        if(choice==1){
            system("cls");
        }
        else{
            system("cls");
            printf("\n\n\tThank you for using the system! Have a nice day\n");
        }


    }while(choice==1);


    return 0;
}

