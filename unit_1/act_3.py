### Bank ###

print("Start program")

Price_hour=300
min_hr=40
bon=1.5
Hrs=0

Hrs=int(input("Enter number of hours worked: "))

if (Hrs>40):
    Extra_hrs = Hrs-min_hr
    salary=(min_hr*Price_hour)+(Extra_hrs*Price_hour*bon)

else: 
    salary=Hrs*Price_hour

print("The salary of the worker is $",salary)