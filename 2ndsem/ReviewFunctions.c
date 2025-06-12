#include<stdio.h>

float total(float sub1, float sub2, float sub3, float sub4, float sub5);
float average(float sum, float numofsubs);

int main()
{
    float subj1, subj2, subj3, subj4, subj5;
    float resulta, gwa;
    float numofsubjects = 5;

    printf("Enter the grades of the five subjects\n");
    scanf("%f %f %f %f %f", &subj1, &subj2, &subj3, &subj4, &subj5);
    resulta = total(subj1, subj2, subj3, subj4, subj5);

    gwa = average(resulta, numofsubjects);
    printf("Your general weighted average is %.2f",gwa);
    return 0;
}

float total(float sub1, float sub2, float sub3, float sub4, float sub5)
{
    float result;
    result = sub1 + sub2 + sub3 + sub4 + sub5;
    return result;
}

float average(float sum, float numofsubs)
{
    float finaltotal;
    finaltotal = sum / numofsubs;
    return finaltotal;
}
