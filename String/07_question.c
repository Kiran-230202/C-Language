#include<stdio.h>
#include<string.h>
void main(){
    char str1[100],str2[100];
     printf("Enter the string:");
    fgets(str1,sizeof str1,stdin);
    strcpy(str2,str1);
    printf("%s",str2);
}