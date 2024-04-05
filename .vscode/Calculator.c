#include <stdio.h>
int main()
{
    int num1, num2;
    char choice;

    printf("Enter + for Addition\n      - for Subtraction\n      * for Multiplication\n      / for Division\n      %% for Modulo");
    printf("\n========================================");

    printf("\nEnter Number 1:");
    scanf("%d", &num1);
    printf("\nEnter Operation:");
    scanf(" %c",&choice);
    printf("\nEnter Number 2:");
    scanf("%d",&num2);

    printf("\n========================================\n");

    switch (choice)
    {
    case '+':
        printf("The Addition of %d and %d is:%d", num1, num2, num1 + num2);
        break;
    case '-':
        printf("The Subtraction of %d and %d is:%d", num1, num2, num1 - num2);
        break;
    case '*':
        printf("The Multiplication of %d and %d is:%d", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Can't divide by zero");
        }
        else
        {
            printf("The Division of %d and %d is:%d", num1, num2, num1 / num2);
        }
        break;
    case '%':
        printf("The Modulo of %d and %d is:%d", num1, num2, num1 % num2);
        break;

    default:
        printf("Enter valide operation name");
        break;
    }
    return 0;
}