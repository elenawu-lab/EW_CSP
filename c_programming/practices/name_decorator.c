// EW 7th Name Decorator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    printf("Tell me your name: \n");
    scanf("%s", name);
    strcat("$$$", name);
    
    return 0;
}