#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int comparestring(char str1[],char str2[]){
    int i,count=0;
    while (str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]!=str2[i]){
            count++;
        }
        i++;
    }

    if(count==0){
        return 0;
    }
    else{
        return 1;
    }
    

}

void main(){
    char str1[100],str2[100];
    printf("Enter the First sring:");
    fgets(str1,sizeof str1,stdin);
    printf("Enter the second sring:");
    fgets(str2,sizeof str2,stdin);

    int result=comparestring(str1,str2);
    if(result==0){
        printf("The strings are same");
    }
    else{
        printf("The strings are not same");
    }
   

}