#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int my_int=0;
float my_float=3.14;
char my_char='c';
char my_str[10]="hola";

float second_float = 0.0;
int* my_ptr_int = &my_int;

int main(int argc, char** argv){
    strcpy(my_str, argv[1]);
    int base= atoi( my_str );

    strcpy(my_str, argv[2]);
    int altura = atoi(my_str);

    printf("my_int: %i, my_float: %f, my_char: %c, my_str: %s, my_ptr_int: %p.\n", my_int, my_float, my_char, my_str, my_ptr_int);
    printf("argc: %i, element 1: %d, elem 2: %s char: %c \n", argc, base * altura, argv[2], 'L');

    return 0;
}