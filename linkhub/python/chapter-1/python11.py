# Question: Write a Python program to calculate Simple Interest
# and total amount using principal, rate and time.

# User se principal amount input liya ja raha hai
# (Spelling correction: PRINCIPLE → PRINCIPAL)
p = float(input("ENTER PRINCIPAL AMOUNT = "))

# User se rate of interest input liya ja raha hai
# (Spelling correction: INTERST → INTEREST)
r = float(input("ENTER RATE OF INTEREST = "))

# User se time input liya ja raha hai (months me)
t = float(input("ENTER TIME IN MONTHS = "))

# Simple Interest ka formula: (P * R * T) / 100
si = (p * r * t) / 100

# Total interest print kiya ja raha hai
print("TOTAL INTEREST = ", si)

# Total amount = Principal + Interest
print("THE TOTAL AMOUNT WITH INTEREST = ", si + p)