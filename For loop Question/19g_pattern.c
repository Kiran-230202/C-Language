#include <stdio.h>

int main() {
    int N = 10;
    int num = 1;
    int minRow = 0, maxRow = N - 1, minCol = 0, maxCol = N - 1;
    
    while (num<=100)
    {
        for(int i=minRow;i<=maxRow;i++){
            printf("%d\t",num++);
        }
        printf("\n");
        for(int i=maxCol;i>minCol;i--){
            printf("%d\t",num--);

        }
        printf("\n");
         for(int i=maxRow;i>minRow;i--){
            printf("%d\t",num--);
        }
        printf("\n");
        for(int i=minCol;i<=maxCol;i++){
            printf("%d\t",num++);

        }
        printf("\n");
    }
    

    
    return 0;
}
