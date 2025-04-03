/*
//reading to a file
#include<stdio.h>

int main()
{

    FILE *file=fopen("example.txt","r"); //read
    char text[100];
    if(file==NULL){
        printf("File does not exist!");
        return 1;
    }

    while(fgets(text,100,file)){
        printf("%s",text);
    }
    fclose(file);


    return 0;

}*/

/*
//writing to a file
#include<stdio.h>

int main()
{

    FILE *file=fopen("example.txt","w"); //write

    if(file==NULL){
        printf("Error opening file!");
        return 1;
    }

    fprintf(file,"Hello, this is File Handling in C!");
    fclose(file);

    printf("Data written Successfully!\n");

    return 0;

}*/


//appending to a file
#include<stdio.h>

int main()
{

    //FILE *file=fopen("student.txt","a"); //append
    FILE *file=fopen("D:\\student.txt","a"); //append

    char name[30];
    int age;

    if(file==NULL){
        printf("File does not exist!");
        return 1;
    }

    printf("Enter student name:");
    scanf("%s",name);
    printf("Enter student age:");
    scanf("%d",&age);

    fprintf(file,"\n==============================");
    fprintf(file,"\nName: %s\t;\tAge:%d",name,age);
    fclose(file);

    printf("\nData saved successfully!");

    return 0;

}
