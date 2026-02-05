amount=int(input("ENTER SHOPING AMOUNT = "))

if amount>=5000:
    discount=amount*0.20

elif amount>=3000:
    discount=amount*0.10

elif amount>=1000:
    discount=amount*0.5

else:
    discount=0

print("TOTAL DISCOUNT = ",discount)
print("PAY AFTER DISCOUNT = ",amount-discount)