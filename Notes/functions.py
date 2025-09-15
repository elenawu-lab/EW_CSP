# EW 7th Functions Notes

def welcome():
    name = input("What is your name?\n")
    print("Hello", name)
print("This is not in my function")
welcome()
welcome()
welcome()
welcome()

def add(number, number2):
    number += number2
    print(number)
num_one = 12
num_two = 4
add(80, 4)

import random

def roll(mod):
    return random.randint(2,  18) + mod

strength = roll(0)
dexterity = roll(1)
intellegence = roll(1)
charisma = roll(0)

print("Here are your stats!")
print(f"Strength: {roll(0)}\nDex: {roll(1)}\nInt: {roll(1)}\nChar: {roll(0)}")