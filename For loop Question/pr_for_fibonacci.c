#include <stdio.h>
void main(){
    int n,i,n1=0,n2=1,n3=n1+n2;
    printf("Enter the end point:");
    scanf("%d",&n);
    printf("%d\t%d\t%d\t",n1,n2,n3);
    for(i=0;i<n-3;i++){
        n1=n2;
        n2=n3;
        n3=n1+n2;
        printf("%d\t",n3);
    }
}