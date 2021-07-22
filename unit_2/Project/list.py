import sys

tempF = [63, 73, -999, 91, 86, 82, 72, 81, 66, 77, 75, 104, -999, 84, 77, 66, 82, 63, 93, 72, 82, 64, 75 , 90, 64, -999, 99, 82, 95, 82]
tempC=[]
i=0
l=0
j=0

if __name__ == "__main__":
    print("Original list\n",tempF)
    l=tempF.count(-999)
    for i in range (0,l):
        tempF.remove(-999)
    print("\nNew list:\n",tempF)
    
    for j in range (0,len(tempF)):
        tempC.append(round((tempF[j]-32)*(5/9), 2))
    print("\nDegrees in Celsius:\n", tempC)

    print("\nMaximum degree in Fahrenheit:", max(tempF))
    print("\nMaximum degree in Celsius:", max(tempC))
