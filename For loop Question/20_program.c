#include<stdio.h>
void main(){
    int i,j,count=1,n;
    printf("Enter the end point:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<10;j++){
            if(count<10){
                printf("0%d ",count);
            }
            else{
                printf("%d ",count);
            }
            count++;
        }
        printf("\n");
    }
}