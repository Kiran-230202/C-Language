#include<stdio.h>
struct employee{
    int id;
    char name[100];
    float salary;

};
void main(){
    int i;
    struct employee e[5];
    for(i=0;i<5;i++){
        printf("Enter the id for employee %d\n",i+1);
        scanf("%d",&e[i].id);
        printf("Enter the Name for employee %d\n",i+1);
        scanf("%s",&e[i].name);
        printf("Enter the salary for employee %d\n",i+1);
        scanf("%f",&e[i].salary);
    }
    printf("*******************************************");

    for(i=0;i<5;i++){
      printf("The employee id is:%d\n",e[i].id);
      printf("The employee name is:%s\n",e[i].name);
      printf("The employee salary is:%0.2f\n",e[i].salary);
      printf("\n");
    }

}