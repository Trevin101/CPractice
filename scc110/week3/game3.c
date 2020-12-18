#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int compare(int x, int y)
    {

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
       
       do{
        printf("what is your number?");
        scanf("%d",&guess);
        

        } 
    } while (guess != ans); 
   }
