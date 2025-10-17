#include <stdio.h>
int SumarVector(int A[], int TVECTOR);
int PromedioVector(int suma, int TVECTOR);

int main()
{
    int TVECTOR;
    printf("¡BIENVENIDO/A!\n\n");
    printf("Ingrese el tamaño de su vector:");
    scanf("%d", &TVECTOR);
    
    int A[TVECTOR];
    printf("\nREGISTRO DE NÚMEROS\n");
        for(int i = 0; i < TVECTOR; i++)
    {
        printf("Ingrese el valor del elemento %d: ", i+1);
        scanf("%d", &A[i]);
    }
     
     int suma = SumarVector (A, TVECTOR);
     printf("\nLa suma de todos los elementos del vector es: %d\n", suma);
     int promedio = PromedioVector(suma, TVECTOR);
     printf("\nEl promedio de todos los elementos del vector es: %d\n", promedio);
    return 0;
}

int SumarVector(int A[], int TVECTOR)
{
    int suma = 0;
    for(int i = 0; i < TVECTOR; i++)
    {
        suma = suma + A[i];
    }
    return suma;
}

int PromedioVector(int suma, int TVECTOR)
{
    int promedio = suma / TVECTOR;
    return promedio;
}