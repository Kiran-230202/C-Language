#include <stdio.h>
int main(){
    int i=1,n1=0,n2=1,n3=n1+n2,end;
    printf("Enter the end point");
    scanf("%d",&end);
    printf("Your fibonacci series is:");

    printf("%d\t%d\t%d\t",n1,n2,n3);

    while (i<=end-3)
    {
        n1=n2;
        n2=n3;
        n3=n1+n2;
        printf("%d\t",n3);
        i++;
    }
    return 0;
    
    }