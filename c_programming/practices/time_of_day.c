// EW 7th Time of Day
#include <stdio.h>
#include <string.h>

int main(void){
    int untime;
    printf("What is the time in military time?\n");
    scanf("%d", &untime);

    if(untime >= 1 && untime < 12){
        printf("Good Morning!\n");
    }else if(untime >= 12 && untime < 18){
        printf("Good Afternoon!\n");
    }else if(untime >= 18 && untime <= 24){
        printf("Good Evening!\n");
    }else{
        printf("That is not a time dummy");
    }

    return 0;
}