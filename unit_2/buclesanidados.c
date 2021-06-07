#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TAN 10

int lista[TAN]={10,20,30,40,50,60,70,80,90,100};
int idx = 0;

typedef int INTEGER;

int main(int argc, char** argv){
    int index2=0;
    for (int index=0; index<TAN; index++, index2++){
            printf("index: %d, value: %d.\n\a", index, lista[index]);
            for (size_t i=0; i<3; i++);
            {
                printf("Holamundo!!!\n");
            }
    }

    
    return 0;
}