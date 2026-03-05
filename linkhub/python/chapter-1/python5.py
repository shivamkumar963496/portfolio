# Question: Write a Python program to take product price as input
# and calculate total price including 18% tax.

# User se product ki price input li ja rahi hai
# float() ka use kiya gaya hai taki decimal value bhi accept ho sake
price = float(input("ENTER PRICE = "))

# 18% tax add kiya ja raha hai
# price * 1.18 ka matlab hai original price + 18% GST
total = price * 1.18

# Total price print ki ja rahi hai
print("TOTAL PRICE WITH TAX = ", total)