#include<stdio.h>
void main(){
    int roll[5];
    int i;
    for(i=0;i<3;i++){
        printf("%d enter roll number:",i+1);
        scanf("%d",&roll[i]);
    }
     for(i=0;i<3;i++){
        printf("%d\t",roll[i]);
    }
}