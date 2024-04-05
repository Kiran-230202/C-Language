#include<stdio.h>
void main(){
    int i,j,k,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}


// debug 
// n=5 i=1 i<=5 true 
//  j=1 j<5-0 true " " j=2 j<5 true " "  j=3 j<5 true " "  j=4 j<5 true " "  j=5 j<5 false
//  k=1 k<=2*i-1 true * 

    
