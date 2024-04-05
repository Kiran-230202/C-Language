#include<stdio.h>
void main(){
    int num;
    printf("Enter the number of month: ");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("There are 31 days in this month");
        break;
    case 2:
        printf("There are 28 days in this month");
        break;
    case 3:
        printf("There are 31 days in this month");
        break;
    case 4:
        printf("There are 30 days in this month");
        break;
    case 5:
        printf("There are 31 days in this month");
        break;
    case 6:
        printf("There are 30 days in this month");
        break;
    case 7:
        printf("There are 31 days in this month");
        break;
    case 8:
        printf("There are 31 days in this month");
        break;
    case 9:
        printf("There are 30 days in this month");
        break;
    case 10:
        printf("There are 31 days in this month");
        break;
    case 11:
        printf("There are 30 days in this month");
        break;
    case 12:
        printf("There are 31 days in this month");
        break;
    
    default:
    printf("Enter valid month number:");
        break;
    }
}