#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    char str[100];
    int count;
    printf("Enter the string:");
    fgets(str,sizeof str,stdin);
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    printf("%d",count);
    

}