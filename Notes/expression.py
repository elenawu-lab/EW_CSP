# EW 7th Expressions

name = input("What is your name?\n")
print("Hello", name)

# Treyson has 12 apples, he has 5 friends he wants to give apples to. How many apples do each friend get?
apples = 12
friends = 5
print("Each friend gets", apples//friends, "apples!")

# Average age of a group of 4 people
Friend1 = 14
Friend2 = 19
Friend3 = 9
Friend4 = 12
print("Average age of friends is", (Friend1+Friend2+Friend3+Friend4)/4)

num1 = int(input("Tell me a number\n"))
num2 = float(input("Tell me another number\n"))

num1 += num2
print("Addition(+)", num1)
num1 -= num2
print("Subtraction(-)", num1)
num1 *= num2
print("Multiplication(*)", num1)
num1 /= num2
print("Division(/)", num1)
num1 **= num2
print("Exponents(**)", num1)
num1 //= num2
print("Integer Division(//)", num1)
num1 %= num2
print("Modulo(%)", num1)
print("Division(/)", round(num1, 2)) # round(number to round, number of decimal places)

