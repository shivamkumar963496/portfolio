# Question: Write a Python program to convert a string number into integer
# and print its data type before and after conversion.

# num variable me string value "100" store ki gayi hai
num = "100"

# num ka current data type check kiya ja raha hai (ye string hoga)
print(type(num))

# Yaha type casting ki ja rahi hai
# string "100" ko integer me convert kiya ja raha hai
num = int(num)

# Conversion ke baad num ka data type check kiya ja raha hai
print(type(num))

# Ab num integer ban chuka hai, isliye 50 add kiya ja raha hai
print(num + 50)