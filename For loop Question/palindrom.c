#include<stdio.h>
void main(){
    int num,rem,rev=0;
    printf("Enter the number:");
    scanf("%d",&num);
    int number=num;
    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(number==rev){
        printf("%d is palindrom",number);
    }
    else
    {printf("%d is not palindrom",number);}
    


}