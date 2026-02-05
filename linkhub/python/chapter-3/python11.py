unit=int(input("ENTER YOUR BILL UNITS = "))

if(unit<=100):
   bill= unit*5

elif(unit<=200):
   bill=unit*7

else:
   bill=unit*10

print("YOUR TOTAL BILL = ",bill)