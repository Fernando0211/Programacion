from sys import argv

lista=["Sam", "Cheeto", "Blu", "Mini michi", "Moka", "Oreo", "Golden","Latte"]

lista2=[i for i in range(0,101) if i%2==0]
print (lista2,"\n")

listaEvenOdd=[[i for i in range(0,101) if i%2==0],[i for i in range(0,101) if i%2!=0]]
print(listaEvenOdd,"\n")

if __name__=="__main__":
    print( f' programName:{argv[0]}\n ' )
    print(lista, len (lista)) #longitud de la lista

    ###manual###
    #print(lista[0])
    #print(lista[1]) 

    index=0

    #automatico#

    while (index<len(lista)):
         print( f'index:{index},value:{lista[index]} ' )
         index = index + 1

    print (".............")

    for index in range(0,len(lista)):
        print( f' index:{index},value:{lista[index]} ' )