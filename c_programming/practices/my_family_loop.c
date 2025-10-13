// EW 7th My Family Loop
#include <stdio.h>
#include <string.h>

int main(void){
    char fammems[][25] = {"Wildon", "Kristin", "Sierra", "Jason"};

    for(int i = 0; i < 4; i++){
        printf("Hello %s!\n", fammems[i]);
    }

    return 0;
}