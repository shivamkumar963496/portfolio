balance=10000

amount=int(input("ENTER WITHDROWL AMOUT = "))

if amount<=balance:
    print("TRANSACTION SUCCESSFULL")
    print("REMAINING BLANCE = ",balance-amount)

else:
    print("INSUFFICENT BLANCE")