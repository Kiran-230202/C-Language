#include<stdio.h>
void main(){
    float year,days;
    printf("Enter the number of days:");
    scanf("%f",&days);
    year=days/365;
    printf("The total number of days are:%.2fyear",year);

}