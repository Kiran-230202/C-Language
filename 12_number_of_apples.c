#include<stdio.h>
int main(){
    int student;
    int apples=5;
    printf("Enter the number of students:");
    scanf("%d",&student);
    int total=student*apples;
    printf("Total apples required is:%d",total);

    return 0;
}