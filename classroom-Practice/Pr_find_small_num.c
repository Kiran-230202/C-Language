#include <stdio.h>
int main(){
    int a ,b;
    printf("enter the num1:");
    scanf("%d",&a);
    printf("enter the num2:");
    scanf("%d",&b);
    if(a<b){
        printf("num1 is smaller:%d",a);
    }else{
        printf("num2 is smaller:%d",b); 
    }

    return 0; 
}