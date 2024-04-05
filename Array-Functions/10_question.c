#include<stdio.h>
#include <stdbool.h>
int palindrom(int num){
    int originalnum=num, rev=0,rem;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    if(originalnum==rev){
        return true;
    }
    else{
        return false;
    }


}
void main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    
    if(palindrom(num)){
            printf("%d is a palindrome number.\n", num);
    }else {
        printf("%d is not a palindrome number.\n", num);
    }

}