// EW 7th Old Enough
#include <stdio.h>
#include <string.h>

int main(void){
    int age[3];
    printf("How old are you?\n");
    scanf("%d", age);

    if(age >= 18){
        printf("You can vote! You are old...\n")
    }elif age >= 16:
        print("Oh goodie! You are hitting the roads!")
    elif age >= 15 and age <= 15:
        print("Oh good luck with your drivers permit!")
    elif age > 3 and age < 15:
        print("You may go to school!")
    else:
        print("You are too young to do enything. Haha L")
}