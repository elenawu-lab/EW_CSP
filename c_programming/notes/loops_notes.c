// EW 7th Loops Notes
#include <stdio.h>
#include <string.h>

int main(void){
    int nums[] = {1, 43, 243, 439, 242, 432, 64}; // Arrays
    char candies[][20] = {"KitKat", "Skittles", "Nerds", "Hershey", "Reeses"};

    for(int x = 0; x < 7; x++){
        printf("%d\n", nums[x]);
    }

    for(int i = 0; i < 5; i++){
        printf("%s are my favorite candy!\n", candies[i]);
    }

    for(int num = 1; num < 11; num++){
        printf("%d\n", num);
    }

    int num = 0;
    while(num < 11){
        printf("%d\n", num);
        num++;
    }

    return 0;
}


// What is a loop?
    // A loop allows code to be repeated for as many times you want.
// What are the two types of loops?
    // The two types of loops are while loops and For loops.
// What is iteration
    // It is just one time through the loop.
// What are arrays?
    // Arrays are lists in python, we are using them to tell us data saved next to each other.
// How do you make lists in C?
    // You put two brackets instead of one, and put numbers in the second bracket.
// How do you make for loops in C?
    // You type for, then your i and make it equal etc..., and do i++. Then print what you want.
// How do you make while loops in C?
    // You type while, then a list less then, equal to, or greater than, then print what you want, and make sure to type variable ++.