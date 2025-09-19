# EW 7th Time of Day

untime = int(input("What is the time in military time?\n"))

if untime >= 1 and untime < 12:
    print("Good Morning!")
elif untime >= 12 and untime < 18:
    print("Good Afternoon!")
elif untime >= 18 and untime <= 24:
    print("Good Evening!")
else:
    print("That is not a time dummy")