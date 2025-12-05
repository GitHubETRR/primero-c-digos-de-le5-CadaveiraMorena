#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void pasaMinuscula(char cadena[])
{
    int i;
    for(i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] >= 'A' && cadena[i] <= 'Z')
        {
            cadena[i] = cadena[i] + 32;
        }
    }
}


int main()
{
    unsigned int i;

char cadena[1001]; 
    printf("---BIENVENIDO/A---\n\n");
    printf("Ingrese una frase *en mayúsculas* (MÁXIMO: 1000 CARACTERES ENTER PARA ENVIAR):\n");
    
    scanf("%[^\n]", cadena); 
    pasaMinuscula(cadena);
    
    printf("\nSu frase en minúsculas:\n%s\n", cadena);
        
return 0;
}