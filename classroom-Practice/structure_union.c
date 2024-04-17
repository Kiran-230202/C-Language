#include <stdio.h>
#include<string.h>
struct student
{
    int s_id;
    char s_name[100];
};
union student1
{
    int u_id;
    char u_name[100];
};

void main()
{
      printf("\n******************structure***************************\n");
    struct student s1={1,"Kiran"};
    printf("%d %s",s1.s_id,s1.s_name);
    printf("\nSize of struct is :%d\n",sizeof(s1));
    printf("\n******************Union***************************\n");
    
    union student1 u1;
    u1.u_id=102;
    printf("%d\t",u1.u_id);
    strcpy(u1.u_name,"Karan");
    printf("%s",u1.u_name);
      printf("Size of union is :%d\n",sizeof(u1));
    
}