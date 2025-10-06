// EW 7th First Program
#include <stdio.h>

int main(void){
    char name[50];

    printf("What is your name?\n");
    fgets(name, sizeof(name), stdin);

    printf("Hello! Welcome to your first C program", name);

    return 0;
}