// EW 7th Update Financial Calculator
#include <stdio.h>
#include <string.h>

float per(float sue){
    float result = sue / inco * 100;
}

int mon(int sum){
    int val;
    printf("What is your monthly %d cost?\n", sum);
    scanf("%d", &val);
    return val;

}

float per(float sue){
    float result = sue / inco * 100;
}

int main(void){
    int inco = mon("income");
    int rent = mon("rent");
    int util = mon("utilities");
    int groc = mon("groceries");
    int trans = mon("transportation");
    int save = inco *.1;
    int spend = inco - (util + rent + groc + trans);

    printf("Your rent is $%d and that is %f of your income.\n", rent);
    printf("Your utilities is $%d and that is {perc(util)}% of your income\n", util);
    printf("Your groceries is $%d and that is {perc(groc)}% of your income\n", groc);
    printf("Your transportation is $%d and that is {perc(trans)}% of your income\n", trans);
    printf("Your savings is $%d and that is {perc(trans)}% of your income\n", save);
    printf("You have $%d of spending money each month!\n", spend);
}