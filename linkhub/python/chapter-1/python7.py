# Question: Write a Python program to swap two variables
# without using a third variable.

# Initially x me 5 store kiya gaya hai
x = 5

# Initially y me 10 store kiya gaya hai
y = 10

# Yaha multiple assignment ka use karke swapping ki ja rahi hai
# x ki value y me aur y ki value x me chali jayegi
x, y = y, x

# Swapped values print ki ja rahi hain
print("x =", x)
print("y =", y)