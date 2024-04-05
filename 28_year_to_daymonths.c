#include<stdio.h>
int main(){
    int y,d,m;
    printf("Enter the number of years:");
    scanf("%d",&y);
    d=y*360;
    m=d/30;
    printf("The number of days are:%d days and months are:%d months",d,m);

    return 0;
}