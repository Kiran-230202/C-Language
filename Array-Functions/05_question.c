#include <stdio.h>
void main()
{
    int n, i, j, temp;
    char ch;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the Number %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Before sorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nEnter the sorting order choose \"A\" for ascending And  \"D\"  for descending: ");
    scanf(" %c", &ch);
    if (ch == 'A')
    {

        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < i + 1; j++)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("After sorting\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}