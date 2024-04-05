#include <stdio.h>
void main(){
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
        
    }
    
}

// _DEBUG:
// i=1 1<=5 ture
//  j=1 1<=1 true print 1 j++ j=2 2<=1 false loop stop
// i=2 2<=5 ture
//  j=1 1<=1 true print 1 j++ j=2 2<=2 true prit 2 j++ j=3 3<=2 false  loop stop
// i=3 3<=5 ture
//  j=1 1<=1 true print 1 j++ j=2 2<=2 true prit 2 j++ j=3 3<=2 false  loop stop