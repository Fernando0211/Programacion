from sys import argv as ag

###Functions###

def addtwonumbers(n1, n2):
    print("Star program: Add two numbers\n")
    return n1+n2

def n01isPrime(n01):
    num_div= 1
    counter=2

    if (n01==1):
        return False #False=No es primo

    else:
        while(counter<=n01):
            
            if(n01%counter==0):
                num_div += 1
            counter += 1
            
        if (num_div>2):
            return False 
        else:
            return True #true=Es primo


def n02isPrime(n02):
    num_div= 1
    counter=2
    
    if (n02==1):
        return False

    else:
        while(counter<=n02):
            
            if(n02%counter==0):
                num_div += 1
            counter += 1
            
        if (num_div>2):
            return False
        else:
            return True





answer = False

def isEven(aNumber):
    if(aNumber%2==0):
        return True
        #print('It is even')
    else:
        return False
        #print('It is odd')

answer=False

if __name__ == "__main__":
    n01=int(input('Dame numero 1: '))
    n02=int(input('Dame numero 2: '))
    
    #print(f'La suma de dos numeros={ addtwonumbers(n01,n02)}')

    #answer=isEven(addtwonumbers(n01,n02))
    # 
    if(isEven(addtwonumbers(n01,n02))):
        print(f'N1:{n01} and N2: {n02} are your lucky numbers')
    else:
         print(f'N1:{n01} and N2: {n02} are NOT your lucky numbers')
    
    if(n01isPrime(n01)==False):
        print(f'N1:{n01} is not prime')
    else:
        print(f'N2:{n01} is prime')
    
    if(n02isPrime(n02)==False):
        print(f'N1:{n02} is not prime')
    else:
        print(f'N1:{n02} is prime')