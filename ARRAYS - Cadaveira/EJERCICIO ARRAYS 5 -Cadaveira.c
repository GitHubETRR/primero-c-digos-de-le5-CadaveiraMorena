#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TVECTOR 3

int ProductoVectores(int A[], int B[], int tamanio);

int main()
{
    int A[TVECTOR];
    int B[TVECTOR];
    int i;
    printf("ESTE PROGRAMA SE UTILIZA PARA CALCULAR EL PRODUCTO ESCALAR DE DOS VECTORES COMPUESTOS POR 3 VALORES...\n\n");
        
    printf("\n---CARGA VECTOR A---");
        for(i = 0; i < TVECTOR; i++){
            printf("\nIngrese el valor %d del vector A: ", i + 1);
            scanf("%d", &A[i]);
        }
    
    printf("\n---CARGA VECTOR B---");
        for(i = 0; i < TVECTOR; i++){
            printf("\nIngrese el valor %d del vector B: ", i + 1);
            scanf("%d", &B[i]);
        }
    
    int resultado = ProductoVectores(A, B, TVECTOR);
    printf("\nEl resultado de su producto escalar es: %d\n", resultado);

    return 0;
}

int ProductoVectores(int A[], int B[], int tamanio)
{
    int i;     
    int suma = 0;
    
    for(i = 0; i < TVECTOR; i++) {
        suma = suma + (A[i] * B[i]);
    }

    return suma;
}