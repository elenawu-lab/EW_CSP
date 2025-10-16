// EW 7th Update Financial Calculator
#include <stdio.h>
#include <string.h>

int mon(char* sum){
    int val;
    printf("What is your monthly %s cost?\n", sum);
    scanf("%d", &val);
    return val;
}

float per(float sue, int inci){
    float result = sue / inci * 100;
    return result;
}

int main(void){
    float income = mon("income");
    float rent = mon("rent");
    float utili = mon("utilities");
    float groce = mon("groceries");
    float trans = mon("transportation");
    float save = (float)income *.1;
    float spend = income - (utili + rent + groce + trans + save);

    float rento = per(rent, income);
    float uit = per(utili, income);
    float gorss = per(groce, income);
    float train = per(trans, income);
    float savvy = per(save, income);

    printf("Your rent is $%.2f and that is %.0f percent of your income.\n", rent, rento);
    printf("Your utilities is $%.2f and that is %.0f percent of your income\n", utili, uit);
    printf("Your groceries is $%.2f and that is %.0f percent of your income\n", groce, gorss);
    printf("Your transportation is $%.2f and that is %.0f percent of your income\n", trans, train);
    printf("Your savings is $%.2f and that is %.0f percent of your income\n", save, savvy);
    printf("You have $%.2f of spending money each month!\n", spend);

    return 0;
}