# Question: Write a Python program to take name and age as input
# and print them using f-string formatting.

# User se naam input liya ja raha hai
name = input("ENTER YOUR NAME = ")

# User se age input li ja rahi hai
# int() ka use kiya gaya hai taki age integer me convert ho jaye
age = int(input("ENTER YOUR AGE = "))

# f-string ka use karke formatted output print kiya ja raha hai
# {} ke andar variable ka naam likhte hain
print(f"MY NAME IS {name} AND I AM {age} YEARS OLD")