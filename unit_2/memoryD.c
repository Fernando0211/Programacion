#include <stdio.h>
#include <stdlib.h>
#include "/mnt/c/Users/HP/StructuredPrograming2A/unit_2/folderTest/utils.h"

int array[5];
int* arrayPointer=NULL;
int*  arreglo =NULL;


int main(){

        arrayPointer =  (int*)malloc( 6 * sizeof(int));
        arrayPointer[0] =35;
        arrayPointer[1] =36;
        arrayPointer[2] =37;
        arrayPointer[3] =38;
        arrayPointer[4] =31;
        arrayPointer[5] =30;
        
        printarrayPointer(arrayPointer, 0, 6);

        printf( "-------\n  ");
        arreglo = (int*)calloc( 6, sizeof(int)  );
        for(int index = 0;  index<6;  index++  ){
                printf( "arreglo[%d]: '%d'\n  ", index, arreglo[index]);
        };

        arrayPointer =   realloc(arrayPointer, 10*sizeof(int));
        arrayPointer[6] =  29;
        arrayPointer[7] =  28;
        arrayPointer[8] =  25;
        arrayPointer[9] =  24;

        printf( "------\n  ");
        
        printarrayPointer(arrayPointer, 6, 10);

        free(arrayPointer);

        return 0;
}