# Question: Write a Python program to take two numbers as input
# and check whether the first number is less than the second number.
# Also print the result and its data type.

# User se pehla number input liya ja raha hai
# int() ka use kiya gaya hai taki value integer me convert ho jaye
a = int(input("ENTER 1ST NUMBER = "))

# User se dusra number input liya ja raha hai
b = int(input("ENTER 2ND NUMBER = "))

# Yaha comparison operator (<) ka use kiya gaya hai
# Agar a, b se chhota hoga to True milega, warna False
result = a < b

# Comparison ka result print kiya ja raha hai
print(result)

# Result ka data type check kiya ja raha hai (ye bool hoga)
print(type(result))