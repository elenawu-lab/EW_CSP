# EW 7th Loops Notes

foods = ["Chocolate", "Pasta", "Brownies", "Cookies", "Garlic Bread", "Fajitas"]
for food in foods:
    # print(f"{food} is my favorite food!")
    print("Hi")

for x in range(1,20):
    print(x)

"""i = 0
while True:
    print(i)
    i+= 1"""

i = 1

while i <= 20:
    print(i)
    i += 1

x = 2

while x < 21:
    if x % 2 == 0:
        print(f"{x} is an even number.")
    else:
        print(f"{x} is an odd number.")
    x += 1

import random

d = 1
end = random.randint(1,20)

"""while d != end:
    print("Duck")
    d += 1

print("Goose")"""

while True:
    if d == end:
        print("Goose")
        break
    else:
        print("duck")
        d += 1

# Infinite loop(one of 3 steps missing)
# What is a loop?
# Loops repeat the code inside for the specified amount of time.
# What are the two types of loops?
# For Loop, a loop following instructions intil it stops, while loop How many times loop has run set stopping point, increase iterator. Infinite loop would destroy computer
# What is iteration
# It is one loop of the same code
# What are lists?
# 
# How do you make lists in python?
# 
# How do you make for loops in python?
# How do you make while loops in python?