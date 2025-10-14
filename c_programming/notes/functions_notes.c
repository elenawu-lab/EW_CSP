// EW 7th Functions Notes
#include <stdio.h>
#include <string.h>

void birth(char* name, int age) {
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", name);
    printf("Happy Birthday to you!\n");
    printf("Happy birthday %s you are %d!\n", name, age);
}

int mul(int x, int y){
    return x * y;
}

float get(char* type){
    float value;
    printf("How many %s do you have?\n", type);
    scanf("%f", &value);
    return value;
}

int main(void){
    birth("Jesus", 15);
    birth("Gwen", 14);
    birth("Cecily", 16);
    int pro = mul(8,5);
    printf("%d\n", pro);
    printf("%d\n", mul(4,6));
    float pen = get("pencils");
    float notes = get("notebooks");
    printf("You have %.2f pencils and %.2f notebooks.\n", pen, notes);

    return 0;
}

// What a function is
    // A piece of code that can be reused as many times as you want.
// Why we use functions
    // It helps us use less lines of code and write less.
// How to write a function in C
    // You write two functions, one with the parameter and the code and the other with the return.
// What are arguments and parameters?
    // Parameter is when we define, argument is the value of the variable.
// How do arguments and parameters work together?
    // 
// How to use parameters and arguments in C
    // It defines the functions and it makes the value of the function.
// What are return statements?
    // When I call the function whatever is in the return statement it will replace where you called it.
// How do return statements change how you define a function in C?
    // The return changes the value of the of the function.
// What do return statements do with the information?
    // It returns it back to where you called it.