#include<stdio.h>
void main(){
    int i,j,num,fact;
   
    for (i = 1; i<=num; i++)
    {
         printf("Enter the number:");
         scanf("%d",&num); 
         fact=1;
          
         for(j=1;j<=num;j++){
            fact=fact*j;
         }
           printf("The Factorial is:%d\n",fact);
    }
}



