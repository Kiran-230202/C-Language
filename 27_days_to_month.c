#include <stdio.h>
int main(){
    int days,month;
    printf("Enter the days:");
    scanf("%d",&days);
    month=days/30;
    printf("The number of months are:%d months",month);
    return 0;
}