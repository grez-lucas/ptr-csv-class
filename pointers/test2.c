#include <stdio.h>
#include <stdlib.h>
#include <time.h> //libreria para facilitar el uso de valores aleatorios autenticos

// Punteros y arreglos

int main(int argc, char **argv)
{

    srand((unsigned int)time(NULL));

    int n = 10;

    // Para el caso del HEAP

    float *array = malloc(sizeof(float) * n); // reservamos memoria para un arreglo de 10 floats
    for (int i = 0; i < n; i++)
        array[i] = (float)rand() / (float)(RAND_MAX);

    // Imprimamos el arreglo generado

    for (int i = 0; i < n; i++)
        printf("%f, ", array[i]);
    printf("\n");

    // Para el caso del STACK
    int array2[10];
    for(int i=0; i<n; i++) array2[i] = i;
    // Imprimir arreglo

    for (int i = 0; i < n; i++)
        printf("%d, ", array2[i]);
    printf("\n");

    return 0;
}