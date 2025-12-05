#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void pasaMinuscula(char cadena[])
{
    int i;
    for(i = 0; cadena[i] != '\0'; i++)//la condición del for es siempre la misma
    {
        if (cadena[i] >= 'A' && cadena[i] <= 'Z')
        {
            cadena[i] = cadena[i] + 32;
        }
    }
}

int vocales(char cadena[])
{
    int i, contador = 0;

    for(i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' ||
            cadena[i] == 'o' || cadena[i] == 'u')
        {
            contador++;
        }
    }

    return contador;
}

int main()
{
    unsigned int i;
    char cadena[1001]; 
    int totalVocales;
    

    printf("---BIENVENIDO/A---\n\n");
    printf("Ingrese una frase *en mayúsculas* (MÁXIMO: 1000 CARACTERES ENTER PARA ENVIAR):\n");
    
    scanf("%[^\n]", cadena); 
    pasaMinuscula(cadena);
    totalVocales = vocales(cadena);
    
    printf("\nSu frase en minúsculas:\n%s\n", cadena);
    printf("\nLas vocales en su texto son: %d\n", totalVocales);
        
return 0;
}