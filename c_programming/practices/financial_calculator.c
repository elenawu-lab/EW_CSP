// EW 7th Financial Calculator

#include <stdio.h>
#include <math.h>

int main(void){
    // Rent, Utilities, Groceries, and Transportation
    // Savings is 10% income (income*1)
    // Spending = income - (utilities + rent + groceries + transportation + savings)
    // Percent_rent=rent/income*100

    float income;
    float rent;
    float util;
    float groc;
    float trans;
    float save;
    float spend;

    printf("\nWhat is your monthly income?\n");
    scanf("%f", &income);
    printf("\nWhat is your monthly rent cost?\n");
    scanf("%f", &rent);
    printf("\nWhat is your monthly utilities?\n");
    scanf("%f", &util);
    printf("\nWhat is your monthly grocery cost?\n");
    scanf("%f", &groc);
    printf("\nWhat is your daily transportation cost?\n");
    scanf("%f", &trans);
    save = income *.1;
    spend = income - (util + rent + groc + trans + save);

    printf("Your rent is $%.00f and that is %.00f\n of your income.", rent, income);
    printf("Your utilities is $%.00f\n and that is (util/income*100) of your income", util, income);
    printf("Your groceries is $%.00f\n and that is (groc/income*100) of your income", groc, income);
    printf("Your transportation is $%.00f\n and that is", (trans/income*100), " of your income", trans);
    printf("Your savings is $%.00f\n and that is", (save/income*100), " of your income", save);
    printf("You have $%.00f\n of spending money each month!", spend);

    return 0;
}