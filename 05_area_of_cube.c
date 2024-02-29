#include <stdio.h>
int main(){
    float a;
    printf("Enter the size of one side of ypur cube:");
    scanf("%f",&a);
    float area=6*a*a;
    printf("The Area of the cube is:%0.2f",area);
    return 0;
}