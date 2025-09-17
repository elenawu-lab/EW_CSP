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
grade = 84
if grade >= 90:
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
# What are logical operators for?
# What does a nested conditional statement do?