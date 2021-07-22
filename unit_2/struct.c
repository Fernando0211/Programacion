#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "/mnt/c/Users/HP/StructuredPrograming2A/unit_2/folderTest/utils.h"

int a=2;
int b=4;

int main(int argc, char** argv){
    Utils myStructC={1};
    printf("myInt: %d. &myStructC:%p\n", myStructC.myInt, &myStructC);
    Utils* myStructP=&myStructC;
    printf("myInt: %d\n", (*myStructP).myInt);
     printf("/////////\n");
    Utils obj;
        obj.myInt=100;
        obj.swap=swap;
        obj.swap(&a, &b);
        printf("obj.myInt:%d \n", obj.myInt);
        printf( "a:%d, b:%d.", a,b );   
        return 0;
}; 