# Question: Write a Python program to calculate the area of a circle
# by taking radius as input from the user.

# User se circle ka radius input liya ja raha hai
# float() ka use kiya gaya hai taki decimal value bhi accept ho sake
radius = float(input("ENTER THE RADIUS = "))

# Area ka formula: pi * r * r
# Yaha pi ki value 3.1415 li gayi hai
area = 3.1415 * radius * radius

# Calculated area print kiya ja raha hai
print("THE AREA OF THE CIRCLE = ", area)