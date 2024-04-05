#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the num1:");
    scanf("%d",&a);
    printf("enter the num2:");
    scanf("%d",&b);
    printf("enter the num3:");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("num1 is greater:%d",a);
    }
    else if(b>a&&b>c){
        printf("num2 is gtreater:%d",b);
    }
    else if (c>a&&c>b)
    {
        printf("num3 is greater:%d",c);
    }
   
    
    return 0;
}