password=(input("ENTER PASSWORD = "))

if len(password)>=8:
    print("STRONG PASSWORD")

elif len(password)>=5:
    print("MEDIUM PASSWORD")

else:
    print("WEEK PASSWORD")