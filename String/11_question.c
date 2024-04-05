#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main(){
    int i,length,ch;
    char str[100];
    printf("Entr the string:");
    fgets(str,sizeof str,stdin);

    printf("The given string is:%s",str);

    length=strlen(str);

    for(i=0;i<length;i++){
        ch=islower(str[i])?toupper(str[i]):tolower(str[i]);
        putchar(ch);
    }

    printf("\n");




}