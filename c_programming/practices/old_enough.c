// EW 7th Old Enough
#include <stdio.h>
#include <string.h>

int main(void){
    int age;
    printf("How old are you?\n");
    scanf("%d", &age);

    if(age >= 18){
        printf("You can vote! You are old...\n");
    }else if(age >= 16){
        printf("Oh goodie! You are hitting the roads!\n");
    }else if(age >= 15 && age <= 15){
        printf("Oh good luck with your drivers permit!\n");
    }else if(age > 3 && age < 15){
        printf("You may go to school!\n");
    }else{
        printf("You are too young to do enything. Haha L\n");
    }

    return 0;
}