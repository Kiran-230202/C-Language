#include<stdio.h>
int main(){
    int a=10,b=30;
    int c;
    printf("before swap a is %d and b is %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swaping a is%d and b is %d",a,b);
    return 0;
}