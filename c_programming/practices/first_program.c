// EW 7th First Program

#include <stdio.h>

int main(void){
    char name[25];
    printf("\nWhat is your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s", name);

    return 0;
}