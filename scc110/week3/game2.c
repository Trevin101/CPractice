#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main()
{   
        srand(time(NULL));

        int ans;
        int guess;
        int temp;
        bool endpath;


        ans = rand() % 10; 

        do{        
            endpath = false;

            temp = ans;
            printf ("Higher or lower than a %d, 0 for lower 1 for higher \n", temp);
            scanf("%d", &guess);
            ans = rand() % 10;
            
            if (( guess == 0 && ans > temp) || (guess == 1 && ans < temp))
            {
                endpath = true;
            }
            
        } while (endpath == false);

    printf ("You have failed! The number was %d \n", ans);
}