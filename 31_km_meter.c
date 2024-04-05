#include <stdio.h>
int main(){
    float km;
    printf("Enter The Km :");
    scanf("%f",&km);
    float res=km*1000;
    printf("The converted km in meter is:%.2fmetere",res);
    return 0;
}