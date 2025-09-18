# EW 7th Update Budget Calculator

# Rent, Utilities, Groceries, and Transportation
# Savings is 10% income (income*1)
# Spending = income - (utilities + rent + groceries + transportation + savings)
# Percent_rent=rent/income*100

def money(sum):
    result = input(f"What is your monthly {sum} cost?\n")
    return result

income = money("income")
rent = money("rent")
util = money("utilities")
groc = money("groceries")
trans = money("transportation")
spend = income - (util + rent + groc + trans)

def perc(ans):
    result = float(ans/income*100)
    return result

print(f"Your rent is ${rent} and that is {perc(rent)}% of your income.")
print(f"Your utilities is ${util} and that is {perc(util)}% of your income")
print(f"Your groceries is ${groc} and that is {perc(groc)}% of your income")
print(f"Your transportation is ${trans} and that is {perc(trans)}% of your income")
print(f"You have ${spend} of spending money each month!")