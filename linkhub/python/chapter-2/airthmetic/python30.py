# Reverse a number

num = int(input("Enter a number: "))

rev = 0

rev = (num % 10) * 100 + ((num // 10) % 10) * 10 + (num // 100)

print("Reverse number =", rev)