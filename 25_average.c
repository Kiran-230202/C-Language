#include<stdio.h>
int main(){
    int e1,e2,e3,e4,e5,sum;
    float avg;
    printf("Enter expenses:");
    scanf("%d%d%d%d%d",&e1,&e2,&e3,&e4,&e5);
    sum=e1+e2+e3+e4+e5;
    avg=sum/5;
    printf("The average expense is:%.2f",avg);
    return 0;
}