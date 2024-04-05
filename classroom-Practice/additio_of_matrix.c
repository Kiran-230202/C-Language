#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter the value you want :");
    scanf("%d",&n);
    int arr1[n][n],arr2[n][n],sum[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter the value %d%d :",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter the value %d%d :",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    for ( i = 0; i < n; i++)
    {
        for(j=0;j<n;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

     for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    



}