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

    printf("What is your monthly income?\n");
    scanf("%f", &income);
    printf("What is your monthly rent cost?\n");
    scanf("%f", &rent);
    printf("What is your monthly utilities?\n");
    scanf("%f", &util);
    printf("What is your monthly grocery cost?\n");
    scanf("%f", &groc);
    printf("What is your daily transportation cost?\n");
    scanf("%f", &trans);
    save = income *.1;
    spend = income - (util + rent + groc + trans + save);

    printf("Your rent is $%.2f and that is %.2f percent of your income.\n", rent, (rent/income*100));
    printf("Your utilities is $%.2f and that is %.2f percent of your income.\n", util, (util/income*100));
    printf("Your groceries is $%.2f and that is %.2f percent of your income.\n", groc, (groc/income*100));
    printf("Your transportation is $%.2f and that is %.2f percent of your income.\n", trans, (trans/income*100));
    printf("Your savings is $%.2f and that is %.2f percent of your income.\n", save, (save/income*100));
    printf("You have $%.2f of spending money each month!", spend);

    return 0;
}