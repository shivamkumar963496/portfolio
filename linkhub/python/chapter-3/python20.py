a=int(input("ENTER 1ST NUMBER = "))
b=int(input("ENTER 2ND NUMBER = "))
choice=int(input("1 FOR ADD : 2 FOR SUB : 3 FOR MUL : 4 FOR DIV : "))

if choice==1:
    print("ADDITION = ",a+b)

elif choice==2:
    print("SUB = ",a-b)

elif choice==3:
    print("MULTIPLY = ",a*b)

elif choice==4:
    print("DIVISION = ",a/b)

else:
    print("INVALIED CHOICE")