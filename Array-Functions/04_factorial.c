#include<stdio.h>
int factorial(int num){
    if(num==0||num==1){
        return 1;
    }
    else{
        return (num*factorial(num-1));
    }
}
void main(){
    int num;
    printf("Enter the number you want the factorial:");
    scanf("%d",&num);
    printf("The factorial of %d is :%d",num,factorial(num));

}