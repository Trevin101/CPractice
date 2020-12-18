#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>



int main()
{       
    bool swap = true;
    int i;
    int someChars[7] ={1, 45, 432,54 ,435, 45, 34};
    int swapCount = 0;
    int runCount = 0;
    int temp;

    while (swap==true) {
        swap = false;
            for ( i = 1; i < 8 ; i++){
                if (someChars[i-1] > someChars[i]) {
                    temp = someChars[i];
                    someChars[i] = someChars[i-1];
                    someChars[i-1] = temp;
                    swapCount += 1;
                    swap = true;
                }
            }
            runCount += 1;

    }
    printf("This has run %d times and has had %d swaps", runCount, swapCount);
    
    for (i = 0; i < 8; i++) {
    printf("%d, ",someChars[i]);
    }  
}