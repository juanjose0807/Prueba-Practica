#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "funciones.h"

void IngresarDatos(char nombre[5][50], float edad[5], char estcivil[5][50]);


int main (int argc, char *argv[]) {
    char nombre[5][50];
    float edad[5];
    char estcivil[5][50];
    int PerBuscada[50];
    int Op;
    int Op2;

   
    Printf("Ingrese la Opción");
    scanf("%s", &Op);

    switch (Op)
    {
    case 1:
     IngresarDatos(nombre, edad, estcivil);
     
        break;
    case 2:
    BuscarEstado(nombre, edad, estcivil, PerBuscada);
     break;
    case 3:
    BuscarEdad(nombre, edad, estcivil, PerBuscada);
    default:
        break;
    }
    


    return 0;
}





 