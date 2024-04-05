#include<stdio.h>
void main(){
    float unit,surcharge=0.20,total;
    printf("Enter your electricity units:");
    scanf("%f",&unit);
    if(unit<=50){
        total=(unit*0.50)+0.20;
        printf("Your electicity bill is %.2fRs.",total);
    }
    else if(unit<=150){
        total=(unit*0.75)+0.20;
        printf("Your electicity bill is %.2fRs.",total);
    }
    else if(unit<=250){
        total=(unit*1.20)+0.20;
        printf("Your electicity bill is %.2fRs.",total);
    }
    else{
        total=(unit*1.50)+0.20;
        printf("Your electicity bill is %.2fRs.",total);
    }
}