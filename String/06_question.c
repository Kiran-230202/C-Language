#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int i, alpha, num, splc;
    i = alpha = num = splc = 0;
    char str[100];
    printf("Enter the string:");
    fgets(str, sizeof str, stdin);
    while (str[i] != '\0')
    {
        if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){
            alpha++;
        }
        else if(str[i]>='0' &&str[i]<='9'){
            num++;
        }
        else{
            splc++;
        }
        i++;
    }

    printf("Number of Alphabets in the string is : %d\n", alpha);
    printf("Number of Digits in the string is : %d\n", num);
    printf("Number of Special characters in the string is : %d\n", splc-1);
}
