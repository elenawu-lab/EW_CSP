// EW 7th Variables Notes
#include <stdio.h>

int main(void){
    int grade; //4 bytes
    float pi = 3.14; //4 bytes
    double long_pi = 3.1415926358; //8 bytes
    char letter_grade; //1 byte
    char name[] = "Elena";
    //User input
    printf("What is your grade percentage as a whole number: ");
    scanf("%d", &grade);

    printf("What is your letter grade: ");
    scanf(" %c", &letter_grade);

    printf("%s did it!\n", name);
    printf("You have a %d, in the class. That is an %c\n", grade, letter_grade);

    return 0;
}

// What is the main difference between declaring variables in Python and C?
    // We need to set how much space to save
// In C, what is the purpose of specifying a data type when declaring a variable?
    // the data will change depending on data type so the program can convert things into strings
// List three common data types used in C and their corresponding format specifiers for printf().
    // int, 4 bytes = d. float, 4 bytes = f. double, 8 bytes = if. char 1 bytes = c = list of characters for a string = s
// How do you declare and initialize an integer variable named "age" with the value 25 in C?
    //
// What is the difference between printf() and scanf() functions in C?
    //
// How do you add comments in C?
    // you add double slashes instead of hashtags
// What is the purpose of the #include <stdio.h> line at the beginning of a C program?
    //
// In C, what is the significance of the main() function?
    // You need to add a function for everything, unlike python
// What is the difference between %d and %f format specifiers in printf()?
    // d is a integer, f is a float
// How do you print a newline character in C?
    // 
// What is the purpose of the & symbol when using scanf() to get user input?
    //
// How do you declare a constant in C? Provide an example.
    // It does not exist in python. It marks a variable so it cannot be changed.