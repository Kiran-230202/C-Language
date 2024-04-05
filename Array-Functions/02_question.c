#include<stdio.h>
int sum(int a ,int b){
    return a+b;
}
int sub(int a ,int b){
    return a-b;
}
int mul(int a ,int b){
    return a*b;
}
int div(int a ,int b){
    return a/b;
}
int mod(int a ,int b){
    return a%b;
}
void main(){
    int a,b,result;
    char choice;
    printf("Enter number1:");
    scanf("%d",&a);
    printf("Enter the operation:");
    scanf(" %c",&choice);
    printf("Enter number2:");
    scanf("%d",&b);
    switch (choice)
    {
    case '+':
          result=sum(a,b);
        printf("Sum of %d and %d is:%d",a,b,result);
        break;
    case '-':
          result=sub(a,b);
        printf("Subtractio of %d and %d is:%d",a,b,result);
        break;
    case '*':
          result=mul(a,b);
        printf("Multiplication of %d and %d is:%d",a,b,result);
        break;
    case '/':
          result=div(a,b);
        printf("Division of %d and %d is:%d",a,b,result);
        break;
    case '%':
          result=mod(a,b);
        printf("Modulo of %d and %d is:%d",a,b,result);
        break;
    
    default:
    printf("Please choose the correct");
        break;
    }


}