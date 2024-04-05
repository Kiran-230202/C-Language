#include <stdio.h>
int main(){
    int a,b;
    printf("enter the num1:");
    scanf("%d",&a);
    printf("enter the num2:");
    scanf("%d",&b);
    if(a==b){
        printf("Both Numbers are  same");   
    }
    else{
        printf("Numbers are different");
    }
    return 0;
}