import sys

###Practica###

def listElementsum (list):
    suma=0
    for i in range (0, len(list[0])):
        for j in range (0, len(list)):
            ##print(f'edificio: fila([{j}), columna({i}): {edificio[j][i]}')
            if list[j][i]==0: break
            
            suma=suma+list[j][i]

    return suma



if __name__ == "__main__":
    print("Practica 07")
    edificio=[[0,1,1,2],
              [0,5,0,0],  
              [2,0,3,3]]
    
    print(listElementsum(edificio))
    