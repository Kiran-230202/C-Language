#include<stdio.h>
void main(){
    int i,j,n;
    printf("Entr the end point:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            if(j%2!=0){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    
}