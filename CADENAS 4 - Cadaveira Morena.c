#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void Invertir(char origen[], char destino[])
{
    int i, j;
    int largo = strlen(origen);   

    j = 0; 

    for(i = largo - 1; i >= 0; i--)  
    {
        destino[j] = origen[i];
        j++;
    }

    destino[j] = '\0'; 
}

int main()
{
    char cadena[1001];
    char invertida[1001];

    printf("---PROGRAMA INVERTIR TEXTO---\n\n");
    printf("Ingrese una frase (MÁXIMO: 1000 CARACTERES):\n");

    scanf("%1000[^\n]", cadena);

    Invertir(cadena, invertida);

    printf("\nLa frase invertida es:\n%s\n", invertida);

    return 0;
}
