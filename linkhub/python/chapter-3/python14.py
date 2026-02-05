num=int(input("ENTER A NUMBER = "))

if num%5==0 and num%3==0:
    print("FIZZBUZZ")

elif num%5==0:
    print("FIZZ")

elif num%3==0:
    print("BUZZ")

else:
    print(num)