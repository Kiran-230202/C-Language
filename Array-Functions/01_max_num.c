#include <stdio.h>
int max_num(int arr[], int size);
void main()
{
    int i, n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int num[n];

    for (i = 0; i <n; i++)
    {
        printf("Enter the number %d:", i+1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }

    // printf(sizeof(num[0]));

    int size = sizeof(num) / sizeof(num[0]);

    int maxnumber = max_num(num, size);
    printf("\nThe maximum number is %d", maxnumber);
}

int max_num(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}