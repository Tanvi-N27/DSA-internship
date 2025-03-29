# Taking character input from the user
char = input("Enter a character: ")

# Checking the conditions and printing the corresponding output
if 'A' <= char <= 'Z':  # Check if the character is an uppercase alphabet
    print(1)
elif 'a' <= char <= 'z':  # Check if the character is a lowercase alphabet
    print(0)
else:  # If the character is not an alphabet
    print(-1)
