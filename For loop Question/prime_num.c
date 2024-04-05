#include <stdio.h>
void main(){
    int num,temp=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            temp++;
        }
    }
    if(temp==2){
        printf("%d is prime",num);
    }
    else{
        printf("not a prime number");
    }
}