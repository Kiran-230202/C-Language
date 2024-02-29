#include <stdio.h>
int main(){
    float b,h;
    printf("Enter the base of Triangle:");
        scanf("%f",&b);
    printf("Enter the hight of Triangle:");
        scanf("%f",&h);
    float area=0.5*b*h;    
    printf("Area of Triangle is:%f",area);


    return 0;
}