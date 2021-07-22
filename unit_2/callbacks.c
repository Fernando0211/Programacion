#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "./folderTest/utils.h"
#include "stdbool.h"

///Callbacks///
void callToNumber(int number){
        printf("Llamando al %d!\n", number);
}

void SecurityCamera(void (*callToNumber) (int number),  int  EmergencyNumber);
void SecurityCamera2();
int main(){
                SecurityCamera( callToNumber, 911  );
        return 0;
}

void SecurityCamera( void (*callToNumber) (int number), int EmergencyNumber){
        
        bool thief = false;
        if(thief){ 
                callToNumber(EmergencyNumber);
        }
}

void SecurityCamera2(){

        callToNumber(999);
}