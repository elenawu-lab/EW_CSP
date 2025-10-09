# EW 7th Budget Calculator

# Rent, Utilities, Groceries, and Transportation
# Savings is 10% income (income*1)
# Spending = income - (utilities + rent + groceries + transportation + savings)
# Percent_rent=rent/income*100

income = float(input("What is your monthly income\n"))
rent = float(input("What is your monthly rent cost?\n"))
util = float(input("What is your monthly utilities?\n"))
groc = float(input("What is your monthly grocery cost?\n"))
trans = float(input("What is your daily transportation cost?\n"))
save = income * 0.10
spend = income - (util + rent + groc + trans + save)

print("Your rent is $", rent, "and that is", (rent/income*100), " of your income.")
print("Your utilities is $", util, "and that is", (util/income*100), " of your income")
print("Your groceries is $", groc, "and that is", (groc/income*100), " of your income")
print("Your transportation is $", trans, "and that is", (trans/income*100), " of your income")
print("Your savings is $", save, "and that is", (save/income*100), " of your income")
print("You have $", spend,"of spending money each month!")