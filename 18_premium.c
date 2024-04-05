#include <stdio.h>
int main()
{
    float salary,premium;
    printf("Enter Your Salary:");
    scanf("%f", &salary);
    if (salary <= 10000)
    {
        premium =salary * 0.05;
    }
    else if (salary <= 20000)
    {
         premium=salary * 0.09;
    }
    else
    {
         premium=salary * 0.15;
    }
    printf("Your premium is:%f",premium);
    return 0;
}