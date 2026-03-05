# Question: Write a Python program to take any data from user
# and print its value and data type using eval() function.

# User se koi bhi data input liya ja raha hai
# input() hamesha string return karta hai
# eval() us string ko evaluate karke actual data type me convert kar deta hai
value = eval(input("ENTER ANY DATA = "))

# Enter ki gayi value print ki ja rahi hai
print("VALUE = ", value)

# value ka data type check kiya ja raha hai
print("DATA TYPE = ", type(value))