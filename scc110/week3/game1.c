// Library for random numbers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
        
    srand(time(NULL));
    int ans;
    int guess;

    printf("I thought of a number\n");
    ans = rand() % 10;
    
    do{
        printf("what is your number?");
        scanf("%d",&guess);
        

        if (guess == ans)
        {
            printf("Well done you guessed it right the numeber was %d\n", ans);
        }
        else if (guess < ans)
        {
            printf("too low \n");
        } 
        else if (guess > ans)
        {
            printf("too high \n ");
        } 
    } while (guess != ans);


}
