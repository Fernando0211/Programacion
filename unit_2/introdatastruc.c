#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "/mnt/c/Users/HP/StructuredPrograming2A/unit_2/folderTest/utils.h"

///Structure///

int myIntArray[5];


typedef struct operador{

        int vida;
        int placas;
        char* nombre;
        void(*Saludo) (char message[]);
        int(*addTwoNumbers) (int argumento1, int argumento2);
}Operador;

// typedef struct nombre apodo; --- Para nombrar tu estructura

int main(){
        
        Operador juan_obrero = { 100, 150, "Park", sayHello, addTwoNumbers };
        struct operador neji_chikito = {90, 150, "Stitch"};
        
        
        printf( "%s\n", juan_obrero.nombre  );
        juan_obrero.Saludo("Objetivo abatido");
        printf("%d\n", juan_obrero.addTwoNumbers(100,150));
        
        fillArray( myIntArray, 5);
        printArray1D( myIntArray,  5   );
        printf("%d", myIntArray[0]);
        printf("%d", myIntArray[1]);
        printf("%d", myIntArray[2]);
        printf("%d", myIntArray[3]);
        printf("%d", myIntArray[4]);
        
        Array* myArray =  returnArray();
        printf("\n%d ", myArray->dirArray[0]);
        printf("\n%d ", myArray->dirArray[1]);
        printf("\n%d ", myArray->dirArray[2]);

        return 0;
}