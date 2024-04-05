#include<stdio.h>
int main(){
    int a=20,b=50;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping%d and%d",a,b);
    
    return 0;
}