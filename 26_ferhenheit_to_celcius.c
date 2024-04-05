#include <stdio.h>
int main(){
    float f,c;
    printf("Enter the temparature in the ferhenheit:");
    scanf("%f",&f);
    c=(f-32)*0.55;
    printf("The temparature in degree celcius is:%f degree",c);
    return 0;
}