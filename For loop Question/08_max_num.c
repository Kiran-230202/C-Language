#include <stdio.h>
void main(){
    int num,max=-1;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<0){
        num=-num;
    }
    while(num>0){
        int digit=num%10;
        if(digit>max){
            max=digit;
        }
        num=num/10;
    }

    if(max==-1){
        printf("no max digit");
    }
    else{
        printf("%d is max ",max);
    }
}