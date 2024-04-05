#include <stdio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for ( j = 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// _DEBUG:
// i=1 1<=5 true
//   j=1 1<=1 true print * and j++ j=2 2<=1 false loop stop 
// i=2 2<=5 true
//   j=1 1<=1 true print * and j++ j=2 2<=2 true print * j++ j=3 3<=2  false loop stop 
// i=3 3<=5 true
//   j=1 1<=1 true print * and j++ j=2 2<=2 print * j++ j=3 3<=3  true print * j++ j=4 4<=3 false loop stop 
// i=4 4<=5 true
//    j=1 1<=1 true print * and j++ j=2 2<=2 print * j++ j=3 3<=3  true print * j++ j=4 4<=4 true print * j++ j=5 5<=4 false loop stop  
// i=5 5<=5 true
//   j=1 1<=1 true print * and j++ j=2 2<=2 print * j++ j=3 3<=3  true print * j++ j=4 4<=4 true print * j++ j=5 5<=5 true print * j++ j=6 6<=5 false loop stop 
// i=6 6<=5 flase  