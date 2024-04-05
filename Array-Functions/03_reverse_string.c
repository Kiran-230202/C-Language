#include<stdio.h>
#include<string.h>

void reverse(char str[],int start,int end){
    char temp;
    while (start<end)
    {
        temp=str[start];
        str[start]=str[end-1];
        str[end-1]=temp;
        start++;end--;
        reverse(str,start,end);
    }
    
}


void main(){
    int len;
    char str[100];
    printf("Enter the string you want to reverse it:");
    fgets(str,sizeof str,stdin);
    printf("Before Reverse\n");
    printf("%s",str);
    len=strlen(str);
    reverse(str,0,len-1);
    printf("After reverse\n");
    printf("%s",str);


}