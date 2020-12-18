#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

    FILE *fvtx;
    int voteCount = 0;
    char fileContent;


int main() 
{

    fvtx = fopen("votes.txt","r");
    
    if(fvtx == NULL) {
        printf("Error!");
    }   

    votes_cast(fvtx);

}
 
int votes_cast(FILE *fvtx){
    fileContent = getc(fvtx);
    while(fileContent != EOF){
        if (fileContent == "n"){
            voteCount = voteCount + 1;

        }

        fileContent = getc(FILE∗);
    }

}