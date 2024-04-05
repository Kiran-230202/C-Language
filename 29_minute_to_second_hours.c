#include <stdio.h>
int main(){
    int m ,s,h;
    printf("Enter the minutes:");
    scanf("%d",&m);
    s=m*60;
    h=m/60;
    printf("The time is:%d hours and %d seconds",h,s);
    return 0;
}