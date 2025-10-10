// EW 7th Strings Notes
#include <stdio.h>
#include <string.h>

int main(void){
    char name[] = "Andrew";

    char last_name[20];
    printf("Tell me your last name: \n");
    scanf("%s", last_name);
    char full_name[50];
    strcat(full_name, last_name);
    printf("%s\n", full_name);

    printf("%c\n", last_name[0]);
    last_name[0] = 'R';

    strcat(full_name, " e.w");
    printf("%s\n", full_name);

    strcat(full_name, last_name);
    printf("%s\n", full_name);

    printf("Your name is %s %s", name, last_name);

    printf("%zu\n", strlen(name));
    printf("%zu\n", sizeof(name));

    return 0;
}


//  What is the difference between a string and a character?
    // Strings have multiple characters, and a character have one character.
//  What types of quotation marks do we need for a string?
    // Double quotes are used for strings.
//  What library do we need to include to access the string functions in C?
    // String.h is the library you need to access string functions.
//  List functions the library allows us to use.
    // strcat, %zu, strlen, sizeof.
// How do we concatenate strings in C?
    // You use strcat(), then it concatenates one string to the end of another.
//  How do we get individual characters from a string in C?
    // Call the name of the variable and then snag the character you want like it was a list.