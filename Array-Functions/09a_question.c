#include<stdio.h>
struct employee{
    int id;
    char name[100];
    float salary;

};

void main(){

    struct employee e;
    printf("Enter employee id:");
    scanf("%d",&e.id);
    printf("Enter employee name:");
    scanf("%s",e.name);
    printf("Enter the salary:");
    scanf("%f",&e.salary);
    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
    printf("\nEmployee id is:%d\n",e.id);
    printf("Employee name is:%s\n",e.name);
    printf("Employee salary is:%0.2f\n",e.salary);

}