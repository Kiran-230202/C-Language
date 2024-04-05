#include <stdio.h>
int main(){
    char fname[20],mname[20],lname[20];
    printf("Enter the your school fname, mname,lname,\n");
    scanf("%s %s %s",&fname,&mname,&lname);
    printf("Abbriviation of school name is:%c %c %s",fname[0],mname[0],lname);
    return 0;
}