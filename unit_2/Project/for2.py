import sys

list=[]
n=1
i=None

if __name__ == "__main__":
    for i in range (0,17):
        list.insert(i, n+1)
        n+=1
        if n==5:
            break
    n=n-3
    
    for i in range (4,17):
        list.insert(i, n+1)
        n+=1
        if n==6:
            break
    n=n-3
    for i in range (8,17):
        list.insert(i, n+1)
        n+=1
        if n==7:
            break
    n=n-3
    for i in range (12,17):
        list.insert(i, n+1)
        n+=1
        if n==8:
            break
    print(list)