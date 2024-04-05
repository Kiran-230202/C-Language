#include<stdio.h>
#include<string.h>
void main(){
    int i=0,vowels=0,consonants=0;
    char str[100];
     printf("Enter the string:");
    fgets(str,sizeof str,stdin);
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i'|| str[i]=='o' || str[i]=='u'||str[i]=='A' || str[i]=='E' || str[i]=='I'|| str[i]=='O' || str[i]=='U'){
            vowels++;
        }
        else{
            consonants++;
        }
        i++;
    }

    printf("The number of vowels are %d\n",vowels);
    printf("The number of consonants are %d\n",consonants-1);
    
}