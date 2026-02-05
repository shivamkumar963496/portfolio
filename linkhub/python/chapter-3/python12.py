sallary=int(input("ENTER YPUR SALLARY = "))

if sallary>=50000:
    tax=sallary*0.10

elif sallary>=30000:
    tax=sallary*0.05

else:
    tax=0

print("TAX = ",tax)

print("NET SALLARY = ",sallary-tax)