#include "/mnt/c/Users/HP/StructuredPrograming2A/unit_2/folderTest/utils.h"

///Structure Homework///

typedef struct calificaciones{

        float Programming;
        float Physics;
        float Magnetism;
        char* nombre;
        float(*Prom)(float n1, float n2, float n3);
        
}calif;

float main(){
    calif Fer={9.4, 9.8, 9.5, "Fernando Rodríguez Zapata", Prom};

    printf("Programming: %f\nPhysics: %f\nMagnetism: %f\nEl promedio de %s es: %f\n", Fer.Programming, Fer.Physics, Fer.Magnetism, Fer.nombre, Fer.Prom(9.4, 9.8, 9.5));
}