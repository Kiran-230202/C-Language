#include<stdio.h>
int main(){
    int p;
    float r;
    float n;
    printf("Enter the information of your loan p,r & n:");
    scanf("%d %f %f",&p,&r,&n);
    float res=(p*r*n)/100;
    printf("The simple interest of your loan is:%f",res);
    return 0;
}