#include <stdio.h>

int main(){
    
    // for(int i=10;i>=1;i--){
    //     printf("%d\n",i);
    // }
    int i,num;
    for(i=0;i<5;i++){
        printf("Enter number:");
        scanf("%d",&num);
    }
    printf("your num is %d",num);
    return 0;
}