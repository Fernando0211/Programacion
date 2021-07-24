#include <stdio.h>
#include<stdlib.h>

int i;
float add=0;
float x=0;
float av=0;

int main(int argc, char* argv[]){
    
    printf( "%s: The average of the numbers entered.\n", argv[0]);
    for (i=1; i<argc; i++){ 
        x=atof(argv[i]);
        add+=x;
        av=(add)/i;
    if (i==(argc-1)){
    printf("\nAverage:%.3f\n", av);  
    } 
    }
    return 0;
}