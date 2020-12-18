#include <stdio.h>
#include <stdlib.h>



int i;
int userInp;
int numbers[10];
int total;

int main()
{    
    printf("Enter ten numbers:\n");

    for (i=0; i<10 ; i++){
        scanf("%d", &userInp);
        numbers[i] = userInp;
    }
    printf("Results are:\n");
    for (i=0; i<10 ; i++){
        printf ("numbers[%d]=%d\n",i,numbers[i]);
    }
    printf("Results after substitution are:\n");
    for (i=0; i<10 ; i++){
        if (numbers[i]%2 > 0){
            numbers[i] = numbers[i] + 1;
        }

        total = total + numbers[i];
        printf ("numbers[%d]=%d\n",i,numbers[i]);
    }
    printf("\n");
    printf("The sum is: %d\n", total);
        

}