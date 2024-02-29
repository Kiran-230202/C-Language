#include<stdio.h>
int main(){
    float r;
    float pi=3.14;
    printf("Enter The Area of circle:");
    scanf("%f",&r);
    float area=r*r*pi;
    float circumference=2*pi*r;
    printf("Area of Circle is:%.2f\n",area);
    printf("Circumference of Circle is:%.2f",circumference);
    
    return 0;

}