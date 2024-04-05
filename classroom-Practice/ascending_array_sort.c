#include <stdio.h>
void main()
{
    int n, i, j, temp;
    printf("Enter the value how much you want:");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d value:", i);
        scanf("%d", &arr[i]);
    }
    // Before sorting
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j=i+1;j<n;j++)
        {
            // j = 0; j < i + 1; j++)
            // j=i+1;j<n;j++
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("\n%d\t", arr[i]);
    }
}