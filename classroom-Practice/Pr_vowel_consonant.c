#include<stdio.h>
int main(){
    char box;
    printf("Enter the Character:");
    scanf("%c",&box);
    if(box=='a'||box=='e'||box=='i'||box=='o'||box=='u'){
        printf("Character is vowel");
    }
    else{
        printf("Character is Consonant");
    }
    return 0;
}