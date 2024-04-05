#include<stdio.h>
void main(){
    int num,rem,rev=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(;num!=0;num/=10){
        rem=num%10;
        rev=rev*10+rem;
    }
     printf("%d is reverse",rev);
}