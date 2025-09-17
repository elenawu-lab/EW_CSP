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
save = (income * 0.10 * (income*1))
spend = income - (util + rent + groc + trans + save)

print("Your rent is $", rent, "and that is", (rent/income*100), " of your income.")
print("Your utilities is $", util, "and that is", (util/income*100), " of your income")
print("Your groceries is $", groc, "and that is", (groc/income*100), " of your income")
print("Your transportation is $", trans, "and that is", (trans/income*100), " of your income")
print("Your savings is $", save, "and that is", (save/income*100), " of your income")
print("You have $", spend,"of spending money each month!")