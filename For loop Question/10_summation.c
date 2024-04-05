#include<stdio.h>
void main(){
    int num,sum;
     printf("Enter the number:");
    scanf("%d",&num);
    int digit1=num%10;
    if(num<0){
        num=-num;
    }
    while(num>=10){
        num=num/10;
    }
    int digit2=num;
    sum=digit1+digit2;
    printf("%d is summation",sum);

}