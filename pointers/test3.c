#include <stdio.h>
#include <stdlib.h>

// Punteros y Funciones


// Paso de parametros por valor

void increment_val(int x){
    x++;
}


// Paso de parametros por referencia
// En C
void increment_ref(int *x){
    (*x) ++;
}

// En C++ (harto mas comodo)
/*
void increment_ref(int &x){
    x++;
}
*/


int main(int argc, char** argv){
    int a = 10;
    printf("Valor inicial de a: %d\n", a);
    increment_val(a);
    printf("Funcion increment_val ejecutada\n");
    printf("Valor final de a: %d\n\tIncrementar a de esta manera no actualiza el valor\n\n", a);


    printf("Valor inicial de a: %d\n", a);
    increment_ref(&a); // Ojo que se entrega la direccion de la variable
    printf("Funcion increment_ref ejecutada\n");
    printf("Valor final de a: %d\n\tIncrementar a de esta manera si actualiza el valor!\n", a);

    return 0;
}