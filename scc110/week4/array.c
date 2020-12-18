#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>



int main()
{
    int someChars[10];
    int i; 
    int number;
    int largestPos;
    int temp;

    for (i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%d", &number);
        someChars[i] = number;
    }

    printf("The numbers in the array are: ");

    for (i = 0; i < 10; i++) {
    printf("%d, ",someChars[i]);
    }  

    for ( i = 1; i < 10 ; i++){
        if (someChars[i-1] > someChars[i]) {
            temp = someChars[i];
            someChars[i] = someChars[i-1];
            someChars[i-1] = temp;
        }
    }
    printf("\n");

    printf("The largest number is %d \n", someChars[9]);

    for ( i = 1; i < 10 ; i++){
        if (someChars[i-1] < someChars[i]) {
            temp = someChars[i];
            someChars[i] = someChars[i-1];
            someChars[i-1] = temp;
        }
    }
    
    printf("The smallest number is %d \n", someChars[9]);

}
