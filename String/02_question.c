#include<stdio.h>
void main(){
    char str[100];
    int i;
    printf("Enter the String:");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++){
        printf("%c\t",str[i]);
    }
}