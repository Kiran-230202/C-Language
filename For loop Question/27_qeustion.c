#include<stdio.h>
void main(){
    int i,n,sum=0;
     printf("Enter rhe end point:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==1){
            sum+=i/(i+1);
        }
        else{
            sum-=i/(i+1);
        }
    }
    printf("the sum is:%d",sum);
}

int main()
{
    double i, n,sum=0;
    n=10;
    for(i=1;i<=n;i++)
    {
        if ((int)i%2==1)
            sum+=i/(i+1);
        else
            sum-=i/(i+1);
    }
    printf("Sum: %lf",sum);
    return 0;
}