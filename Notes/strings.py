# EW 7th Strings Notes

first_name = input("What is your first name?\n").strip().title()
last_name = input("What is your last name?\n").strip().title()

sentence = 'The quick brown fox jumps over the lazy dog.'

full_name = first_name + " " + last_name

print("Welcome to my program", full_name + "!")

# Sanitization and stupid proofing
# Debugging is fixing code

numOne = "1"
numTwo = "2"
print(numOne+numTwo)

sentence = "The quick brown fox jumps over the lazy dog."
print(sentence.find("jumps"))
print(sentence[20:25])
print(sentence[sentence.find("lazy"): len("lazy")+sentence.find("lazy")])