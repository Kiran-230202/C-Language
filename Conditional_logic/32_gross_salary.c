#include<stdio.h>
void main(){
    float basic,gross,hra,da;
    printf("Enter your basic salary:");
    scanf("%f",&basic);
    if(basic<=10000){
        hra=basic*0.20;
        da=basic*0.80;
    }else if (basic<=20000)
    {  hra=basic*0.25;
        da=basic*0.90;
        
    }
    else{
          hra=basic*0.30;
        da=basic*0.95;
    }

    gross=basic+hra+da;

    printf("Gross salary is:%.2f Rs.",gross);
    
}