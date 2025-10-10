// EW 7th Silly Sentences
#include <stdio.h>
#include <string.h>

int main(void){
    printf("Welcome to Silly Sentences. Answer the questions to get a silly sentence.");
    
    char verb[30];
    char verbs[30];
    char sound[30];

    printf("First I need a verb\n");
    scanf("%s", &verb);

    printf("Now I need a second verb\n");
    scanf("%s", &verbs);

    printf("Now tell me a sound\n");
    scanf("%s", &sound);

    printf("As I %s out the door, I started to %s because I heard a %s.\n", verb, verbs, sound);

    return 0;
}