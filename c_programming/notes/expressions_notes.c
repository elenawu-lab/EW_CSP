// EW 7th Expressions Notes
#include <stdio.h>
#include <math.h>

int main(void){
    int year = 2025;
    float pi = 3.14;
    double long_pi = 3.14159265359;

    printf("%d\n", year);
    printf("%d\n", 8/3);
    printf("%f\n", 8.0/3);
    printf("%d\n", (int) pow(2, 4));

    year += 1;
    printf("%d\n", year);
    year++;
    printf("%d\n", year);


    return 0;
}

// What is the difference between an integer and a float in C?
    //
// How does C handle integer division compared to float division?
    //
// List the arithmetic operators available in C and their functions.
    // +, -, /, *, %/. Addiction, substract, division, multiplication, and modulo
// What is the modulus operator, and how is it used?
    // It is the remainder, %
// How do you round a float to the nearest integer in C?
    //
// What is type casting in C? Provide an example of explicit type casting.
    // We change the data type, you can do it with a float and a integer.
// How do compound assignment operators work in C? List three examples.
    // printf("%d", year), year += 1;, year++;
// What is the purpose of the math.h library? Name three functions it provides.
    //
// How do you print a float with a specific number of decimal places using printf()?
    //
// What happens when you mix integer and float operations in C?
    //