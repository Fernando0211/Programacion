#include <stdio.h>
#include <string.h>
#include "/mnt/c/Users/HP/StructuredPrograming2A/unit_2/folderTest/utils.h"


int main(int argc, char** argv){
    
    int otroInt=9;
    int otroInt2=8;
    int multiplo=2;

    Utils myStructC={1, ShowIntAdress, ShowIntValueAdress, modifyVariablesAddress};
    printf("myInt: %d. &myStructC:%p\n", myStructC.myInt, &myStructC);
    Utils* myStructP=&myStructC;
    printf("myInt: %d\n", (*myStructP).myInt);

    printf("////////\n");
    myStructC.ShowIntAdress(&otroInt);
    printf("////////\n");
    myStructC.ShowIntValueAdress(&otroInt);
    printf("////////\n");
    myStructC.modifyVariablesAddress(&otroInt, &otroInt2, multiplo);
    printf("Int=  %i, Int2= %i\n",  otroInt, otroInt2);
    
    printf("////////\n");
    
    return 0;
}