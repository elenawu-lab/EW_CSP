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
// Integers are whole numbers and floats are numbers that can have decimal points.
// How does C handle integer division compared to float division?
// Integer division rounds the end result. Float division you get decimals in your answers.
// List the arithmetic operators available in C and their functions.
// +, -, /, *, %/. Addiction, substract, division, multiplication, and modulo
// What is the modulus operator, and how is it used?
// It is the remainder of a division problem, and it is used to check if numbers are divisible.
// How do you round a float to the nearest integer in C?
// You need the <math.h> return and then you put a round().
// What is type casting in C? Provide an example of explicit type casting.
// We change the data type, you can do it with a float and a integer.
// How do compound assignment operators work in C? List three examples.
// Some compound operators are printf("%d", year), year += 1;, year++;
// What is the purpose of the math.h library? Name three functions it provides.
// The purpose of math.h is to easily be able to do math calculations rather than more complicated ways. sqrt(), pow(), and ceil() are all functions of math.h.
// How do you print a float with a specific number of decimal places using printf()?
// You use the f%, and then you add a dot and how many zeroes you want the decimal number to be.
// What happens when you mix integer and float operations in C?
// The first problem will become a integer, the second one will be a float, and the final problem will be float.