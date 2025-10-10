// EW 7th Conditionals Notes
#include <stdio.h>
#include <string.h>

/*logical operators
&& and
|| or
! not
*/

int main(void){
    int grade;
    char name[35];
    

    printf("What is your name?\n");
    scanf("%s", &name);

    // printf("%d\n", strcmp(name, "Ms.Larose"));
    if(strcmp(name, "Ms.Larose") == 0){
        printf("You don't get a grade!\n");
    }else if(printf("What is your grade percent?\n")){
        printf("What is your grade percent?\n");
        scanf("%d", &grade);
    }else if(grade >= 93){
        printf("You have an A!\n");
    }else if(grade >= 85){
        printf("You have a B!\n");
    }else if(grade >= 70){
        printf("You have a C :/\n");
    }else{
        printf("You are failing D:<\n");
    }

    return 0;
}

// What puts something inside of the “if” statement?
    // Curly brackets puts things inside of if statements.
// How are conditions written in C?
    // You write if, else if, and else statements and then paranthesis and curly brackets.
// How do we write elif conditions in C?
    // You write else if instead of elif.
// When do else conditions run?
    // If the statement does not equal the if or else if.
// What are the 3 logical operators in C?
    // &&(and), ||(or), and !(not).