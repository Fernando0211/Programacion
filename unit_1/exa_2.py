##Design the algorithm for a program that find the greatest number within given 3 numbers by the user.<>##

n1=0
n2=0
n3=0

n1=int(input("Enter a number:"))
n2=int(input("Enter second number:"))
n3=int(input("Enter third number:"))

if (n1>n2 and n1>n3):
    print("The greatest is ",n1)

else:
    if (n2>n3 and n2>n1):
        print("The greatest is ",n2)

    else:        print("The greatest is ",n3)