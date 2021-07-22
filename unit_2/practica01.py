import sys

def sumLista (a):
    return[sum([input[i] for i in range (0, len(a)) if i%2==0]), sum([input[i] for i in range (0, len(a)) if i%2==1])]

if __name__ == "__main__":
    input=[50, 60, 60, 45, 70]

    print(sumLista(input))