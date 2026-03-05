# Question: Write a Python program to take two numbers as input
# and print their sum along with the data type of the sum.

# User se A ki value input li ja rahi hai
# int() ka use kiya gaya hai taki input string se integer me convert ho jaye
a = int(input("ENTER THE VALUE OF A = "))

# User se B ki value input li ja rahi hai
# int() se ise bhi integer me convert kiya gaya hai
b = int(input("ENTER THE VALUE OF B = "))

# Dono numbers ka addition kiya ja raha hai
sum = a + b

# Sum ko print kiya ja raha hai
print("THE SUM OF A AND B = ", sum)

# sum variable ka data type check kiya ja raha hai
print("DATA TYPE OF SUM = ", type(sum))