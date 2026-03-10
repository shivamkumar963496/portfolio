n = int(input("Enter 3 digit number: "))

d1=n%10
d2=(n//10)%10
d3=n//100

total=d1+d2+d3

print("THE SUM OF DIGITS = ",total)