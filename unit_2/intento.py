import sys

list=[]
i=0
n=1

if __name__ == "__main__":
    while n<5:
        list.insert(i, n+1)
        i+=1
        n+=1
        if n==5:
            n=n-3
            while n<6:
                list.insert(i, n+1)
                i+=1
                n+=1
                if n==6:
                    n=n-3
                    while n<8:
                        list.insert(i, n+1)
                        i+=1
                        n+=1
                        if n==7:
                            n=n-3
                            while n<8:
                                list.insert(i, n+1)
                                i+=1
                                n+=1
    print(list)
    
