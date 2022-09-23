#include <stdio.h>
#include <stdlib.h>


// Como inicializar un puntero en el STACK
// <tipo de dato> * <nombre de la variable>
/* Es importante saber el tipo de dato, porque asi el computador
sabe cuanto espacio es el que debe reservar */ 

// Como inicializar un puntero en el HEAP en C
// <tipo de dato> * <nombre de la variable> = malloc(<tamano por reservar>)

int main(int argc, char**argv){
    

    printf("Juguemos con punteros en el STACK\n");
    int *intPtr;
    int *p_null = NULL;

    // Imprimamos la direccion intPtr
    printf("\tDireccion (valor) del puntero p, inicializado pero sin valor: %p\n", intPtr);
    printf("\tDireccion (valor) del puntero p_null, inicializado con valor nulo: %p\n", p_null);
    
    // Asignemosle un valor a intPtr
    *intPtr = 10;
    // Imprimamos la direccion intPtr, y su valor
    printf("\tPuntero p: direccion = %p, valor =  %d\n", intPtr, *intPtr);


    printf("Probemos con memoria dinamica (HEAP)\n");
    int * p3 = malloc(sizeof(int));
    *p3 = 5;
    printf("Puntero p3: %p, su valor guardado en esa direccion es %d\n", p3, *p3);
    // Importante liberar la memoria reservada despues
    free(p3);


    return 0;
}