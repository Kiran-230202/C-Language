#include<stdio.h>
int main()
{
    double i, n, sum = 0.0;
    printf("Enter the end point: ");
    scanf("%lf", &n);
    for(i = 1; i <= n; i++)
    {
        if ((int)i % 2 == 1)
            sum += i / (i + 1);
        else
            sum -= i / (i + 1);
    }
    printf("Sum: %lf", sum);
    return 0;
}
