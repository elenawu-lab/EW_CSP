// EW 7th Name Decorator
#include <stdio.h>
#include <string.h>

int main(void){
    //char name[20];
    //printf("Tell me your name: \n");
    //scanf("%s", name);

    //char decorate[3];
    //printf("Type 3 character: ");
    //scanf("%s", decorate);
    //strcat(decorate, name);
    //scanf("%s", decorate);

    //printf("%s", decorate);

    char name[20];
    printf("Tell me your name: \n");
    scanf("%s", name);

    char symo[] = "$$$";
    char symb[] = "$$$";
    strcat(symo, name);
    strcat(name, symb);
    printf("%s\n", symo);
    
    return 0;
}