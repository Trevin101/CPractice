#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int votes_cast(FILE *fvtx, char *str);

int main()
{
   
    FILE *fvtx;
    int voteCount = 0;
    char fileContent[150];
    char line [150];
    int cVoteCounter = 0;
    int i;
    char ch_arr[7][25] = {
        "The Shadows"
        "Eight Sleepers"
        "Warlocks Quarter"
        "High Energy Magic Region"
        "The Bridge"
        "The Seen University"
        "Lance Castle"
    }
    fvtx = fopen("votes.txt","r");
   
    if(fvtx == NULL) {
        printf("Error!");
    }  

    votes_cast(fvtx, str);
   
    fclose(fvtx);
    return 0;

}
 
int votes_cast(FILE *fvtx){
    voteCount= 0;
    if(fvtx == NULL) {
        return 0;
    }
    else 
        while (!feof(fvtx)) {
            fgets(fileContent, 150, fvtx);
                voteCount += 1;
    }
    return voteCount - 1;
}
int votes_cast_in_constituency_party(FILE *fvtx, char * constituency, char * party){
    char *result = malloc(strlen(constituency) + strlen(party) + 3);
    strcpy(result, constituency);
    strcat(result, ", ");
    strcat(result, party);
       
    while(!feof(fvtx)) {
        fgets(line, 300,fvtx);
        if(strncmp(result, line, strlen(result))==0) { 
            cVoteCounter += 1;
        }
    return(cVoteCounter);
       
    }
}
int calculate_if_winner (FILE * fvtx,  char *constituency,char *party) {
    char *result = malloc(strlen(constituency) + strlen(party) + 3);
    strcpy(result, constituency);
    strcat(result, ", ");
    strcat(result, party);

    char *wizards = malloc(strlen(constituency) + 20);
    strcpy(wizards, constituency);
    strcat(wizards, ", Wizards");

    char *gaurds = malloc(strlen(constituency) + 20);
    strcpy(gaurds, constituency);
    strcat(gaurds, ", Gaurds");

    char *industrialists = malloc(strlen(constituency) + 20);
    strcpy(industrialists, constituency);
    strcat(industrialists, ", Industrialists");


    while(!feof(fvtx)) {
        fseek(fvtx, 6, SEEK_SET);
        fgets(line,300, fvtx);
            if(strncmp(result, line, strlen(result))==0) {
                wVoteCounter +=1;
            }
            else if (strcmp(wizards, line)) {
                wizCount +=1;
            }
            else if (strcmp(gaurds, line)) {
                gaurCount +=1;
            }    
            else if (strcmp(industrialists, line)){
                indCount +=1;
            }
    }

    if (wVoteCounter>wizCount||wVoteCounter>gaurCount||wVoteCounter>indCount){
        return 1;
    }
    else{
        return 0;
    }