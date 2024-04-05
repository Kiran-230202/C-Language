#include<stdio.h>
int main(){
    float meter;
    printf("Enter the meter:");
    scanf("%f",&meter);
    float res=meter/1000;
    printf("The converted value of meter into km is:%.2fkm",res);
    return 0;
}