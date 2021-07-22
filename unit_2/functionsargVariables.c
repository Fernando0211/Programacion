#include <stdio.h>
#include "/mnt/c/Users/HP/StructuredPrograming2A/unit_2/folderTest/utils.h"
#include <stdlib.h>


int var1 = 10;
int var2  = 20;


int main ( int argc, char** argv){
        printf( "var1 =  %d, var2 =%d\n",  var1, var2 );
        printf("Funtion was executed:\n");
        
        //Paso de argumentos por direccion//
        
        modifyVariables(  var1, var2  );
        printf("var1=  %d, var2= %d\n",  var1, var2 );


        //Address of var1 and var2
        // & = "La direccion de" - &x00879fb
        
        int * myptr1 =  &var1;
        int * myptr2 = &var2;

        ShowIntAdress(myptr1);
        ShowIntAdress(myptr2);
        

        printf("Pointer has modificaded the var1:\n");
        myptr1 = &var1; 
        *myptr1 = 20;
        var2 = 40;

       

        printf("///Pointers into functions ///\n");

        printf("var1 =  %d, var2 =%d\n",  var1, var2);
        printf("Funtion address was executed:\n");
        
        
        modifyVariablesAddress(&var1, &var2,  3);
        
        printf("var1=  %d, var2= %d\n",  var1, var2);
        
        return 0;
}