#include <stdio.h>
int main(){
    char fcname[20],mcname[20],lcname[20];
    printf("Enter the country name:");
    scanf("%s %s %s",&fcname,&mcname,&lcname);
    printf("The abbriviatio of the coutry is:%c %c %C",fcname[0],mcname[0],lcname[0]);
    return 0;
}