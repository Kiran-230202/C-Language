#include <stdio.h>
int main(){
    float salary,insurance,loan,totatldeduct,finalslary;
    printf("Enter your salary:");
    scanf("%f",&salary);
    insurance=salary*0.1;
    loan=salary*0.1;
    totatldeduct=insurance+loan;
    finalslary=salary-totatldeduct;

    
    printf("Your remainig salary is:%0.2f",finalslary);
    return 0;
}