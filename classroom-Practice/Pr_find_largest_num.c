#include <stdio.h>
int main(){
    int a ,b;
    printf("enter the num1:");
    scanf("%d",&a);
    printf("enter the num2:");
    scanf("%d",&b);
    if(a>b){
        printf("num1 is greater:%d",a);
    }else{
        printf("num2 is greater:%d",b); 
    }

    return 0; 
}