// EW 7th Silly Sentences
#include <stdio.h>
#include <string.h>

int main(void){
    printf("Welcome to Silly Sentences. Answer the questions to get a silly sentence.");
    verb = input("First I need a verb\n");
    verb2 = input("Now I need a second verb\n").strip().lower();
    sound = input("Now tell me a sound\n").strip().lower();

print("As I " + verb + " out the door, I started to " + verb2 + " because I heard a " + sound + ".");

    return 0;
}