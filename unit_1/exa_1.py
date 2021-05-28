##Design the algorithm for a program that obtain the length and width of a rectangle 
# from the user. Calculate and output the area. If the length and width are equal, output 
# a message indicating that the figure is a square. Make a list of variables, draw the flowchart,
#  and perform a desk check using the following: 4, 8, 5, 5##

n1=0
n2=0
a=0

n1=int(input("Enter the width:"))
n2=int(input("Enter the length:"))

if (n1==n2):
    a=n1*n2
    print("The figure is a square with area of: ",a)

else:
    a=n1*n2
    print("The area is: ",a)