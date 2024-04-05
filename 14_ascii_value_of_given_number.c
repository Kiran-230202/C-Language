#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num>=0 && num<=9){
        int asciValue=num+'0';
        printf("Ascii value of %d is %d",num,asciValue);
    }else{
        printf("Please enter a valid single-digit number.\n");
    }
    return 0;
}