#include<stdio.h>
void main(){
    int choice,amount=0,quantity;
    char ch;
    do{

    
    printf("1.Pizza \t\t\t Price = 180rs/pcs\n");
    printf("2.Burger \t\t\t Price = 100rs/pcs\n");
    printf("3.Dosa   \t\t\t   Price = 120rs/pcs\n");
    printf("4.Idali \t\t\t Price = 50rs/pcs\n");
    printf("Please Enter your choice:");
    scanf("%d",&choice);
    
        switch (choice)
    {
    case 1:
        printf("You have selected the Pizza\n ");
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        printf("Amount:%d\n",amount+=180*quantity);
        break;
    case 2:
        printf("You have selected the Burger\n ");
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
         printf("Amount:%d\n",amount+=100*quantity);
        break;
    case 3:
        printf("You have selected the Dosa\n ");
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
         printf("Amount:%d\n",amount+=120*quantity);
        break;
    case 4:
        printf("You have selected the Idali\n ");
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
         printf("Amount:%d\n",amount+=50*quantity);
        break;
    
    default:
    printf("Please select the valid choise from the menu!!!");
        break;
    }


    printf("\nDo you want to place more order?");
    scanf(" %c",&ch);

    }while(ch=='y'|| ch=='Y');{
        printf("Thank you visit again");
    };
    

   

}