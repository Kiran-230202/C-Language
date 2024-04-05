#include<stdio.h>
int main(){
    char fname[20],mname[20],lname[20];

    printf("Enter Your Full Name:\n");
    scanf("%s %s %s",&fname,&mname,&lname);
    printf("Your Abbrivited Name is:%c %c %s",fname[0],mname[0],lname);
    return 0;
}