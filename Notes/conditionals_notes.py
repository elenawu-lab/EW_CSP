# EW 7th Conditional Notes

# What puts something inside of the “if” statement? 
    # It needs to indented
homework_done = input("Is your homework done?\n").strip().title()

if homework_done == "Yes":
    print("Yes you can go")
else:
    print("Go do your homework >:(")
# What do if statements do?
    # We are going to check if something is true or false
# What are boolean statements?
    # These always result in a true or false
# What do else statements do?
    #  least likely thing first, unlikely thing last it is the thing besides the if statment
# What kind of statement do you use if you have more than 2 needed outcomes?
    # You use a elif statment
grade = 112
if grade >= 90:
    if grade > 100:
        print("You cheated that isn't possible")
    else:
        print(f"You have {grade}% that is an A!")
elif grade >= 80:
    print(f"You have a {grade}% that is a B!")
elif grade >= 70:
    print(f"You have{grade}% that is a C!")
else:
    print(f"You have a {grade}% that is not an C or lower >:(")
# What do each of the different symbols mean in conditionals?
    # The symbols are comparing things to each oher
# <
    # Less than
# >
    # Greater than
# <=
    # Less than or equal to
# >=
    # Greater than or equal to
# ==
    # Two equal sign is a question, are these equal
# !
    # Not equal to
# What are the 3 logical operators?
    # The three logical operators are and, or, not
name = input("What is your name?\n").strip().title()
if name == "Ms Larose":
    print("You are the teacher!")
elif name == "Tia" or name == "Ashley":
    print("You are the TA")
else:
    print(f"Hello {name}, you are a student!")
# What are logical operators for?
    # Or, if either of these are true, than continue. And, both need to be true. Not, not filps things so they are false
# What does a nested conditional statement do?
    # A condition that only happens inside of another condition!