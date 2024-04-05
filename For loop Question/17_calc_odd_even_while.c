#include <stdio.h>
void main(){
    int i=1,num;
   
    while(i<=5)
    {
        printf("Enter the number:");
        scanf("%d",&num);
        if(num%2==0){
            printf("Number is even\n");
        }
        else{
            printf("number is odd\n");
        }
        i++;
    }
    
}