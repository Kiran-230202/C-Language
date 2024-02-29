#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter length:");
        scanf("%d",&a);
    printf("Enter base:");
        scanf("%d",&b);
    printf("Enter height:");
    scanf("%d",&c);
    int area=a+b+c;
    printf("Circumference of triangle:%d",area);
    return 0;
    
}