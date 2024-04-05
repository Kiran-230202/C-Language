#include<stdio.h>
void main(){
    int num,sum=0;
     printf("Enter the number:");
    scanf("%d",&num);
    if(num<0){
        num=-num;
    }
    while(num>0){
        int digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("%d is total",sum);
}