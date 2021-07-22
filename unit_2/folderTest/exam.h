#include <stdio.h>
#include <stdlib.h>

//##Examen Unit 2##//
typedef struct Robot
{
    char* name;
    char* type;
    float height;
    float weight;
    int degreesOfFreedom;
    void (*sayHelloToRobot)(struct Robot);
}ROBOT;

void sayHelloToRobot(ROBOT Robot){
        printf("Hola %s\n", Robot.name);
}