#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "/mnt/c/Users/HP/StructuredPrograming2A/unit_2/folderTest/utils.h"

///Pointers///

int myInt=4;
float myFloat=3.1416;

int* pointerInt=&myInt;

int main(){

    printf("addres myInt: %p, myInt: %d \n", &myInt, myInt);
    printf("addres myFloat: %p, myFloat: %f \n", &myFloat, myFloat);
    printf("addres pointerInt: %p, pointerInt: %p \n", &pointerInt,pointerInt);
    *pointerInt=6;
    printf("addres myInt: %p, myInt: %d \n", &myInt, myInt);

    Array* myArray=returnArray();
    printf("%d\n", myArray->dirArray[1]);

    return 0;
}