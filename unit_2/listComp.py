import sys

###ListComp###

if __name__ == "__main__":
    print("List Comprhension")

    lista=[]
    for iterador in range(0,101):
        if iterador%2==0:
            lista.append(iterador)
    
    print(lista)

    listComp=[iterador for iterador in range(0,101) if iterador%2==0]
    print(listComp)