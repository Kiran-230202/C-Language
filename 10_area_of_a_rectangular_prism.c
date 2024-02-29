#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter length:");
     scanf("%d",&a);
    printf("Enter width:");
     scanf("%d",&b);
    printf("Enter height:");
     scanf("%d",&c);
     int area=2*(a*a+b*a+c*a);
     printf("Area of prism:%d",area);
   
    return 0;
}