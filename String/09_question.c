#include<stdio.h>
void main(){
    int l,i,max_length=0;
    printf("Enter the length:");
    scanf("%d",&l);
    
    char str[l];
    printf("Enter the String:");
    scanf("%s",&str);
   
    for(i=0;i<l;i++){
        if(str[i]=='\0'){
            break;
        }
        else{
            max_length++;
        }
    }
    printf("The max legth is:%d",max_length);
}