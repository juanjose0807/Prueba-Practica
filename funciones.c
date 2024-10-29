#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "funciones.h"

void IngresarDatos(char nombre[5][50], float edad[5], char estcivil[5][50]){
for (int i=0; i<5; i++){
    printf("Ingrese el nombre de la persona %d : ", i+1);
    scanf("%s", nombre[i]);

    for (int j=0; j<5; j++) {
        printf("Ingrese la edad de la persona: %s ", nombre[i]);
        scanf("%f", edad[j]);

        for (int k=0; k<5; k++){
            printf("Ingrese estado civil de %s ", nombre[i]);
            scanf("%s", estcivil[k][50]);
        }

        

        

    }
}
}

int BuscarEstado(char nombre[5][50], float edad[][5], char estcivil[5][50], char PerBuscada[50]){
    int enc=0
for (int i=0; i<5; i++){
    if (strcmp(estcivil[i], char PerBuscada[20])== 0){
        printf("Las persona con estado civil casado se llama %s ", nombre[i] );
        enc=1;
    }
    if (!enc){
        printf("No encotrado");
    }
}

}

int BuscarEdad(char nombre[5][50], float edad[][5], char estcivil[5][50], char PerBuscada[50]){
    int enc=0
for (int i=0; i<5; i++){
    if (strcmp(edad[i][j], char PerBuscada[20])== 0){
        printf("La persona con edad %d se llama %s ", edad[j], nombre[i]);
        enc=1;
    }
    if (!enc){
        printf("No encotrado");
    }
}

}
