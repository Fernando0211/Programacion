import sys

list3=[]
list5=[]
i=0

if __name__ == "__main__":
    print("Lists if a number is divisible by 3 and 5\n")
    for i in range (1,101):
       if i%3==0:
            list3.append(i)
    print("Numbers divisible by 3: ",list3)

    for i in range (1,101):
       if i%5==0:
            list5.append(i)
    print("\nNumbers divisible by 5: ", list5)   
   
