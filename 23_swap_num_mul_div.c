#include<stdio.h>
int main(){
    int a=20,b=50;
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After swaping number %d and %d",a,b);
    return 0;
}