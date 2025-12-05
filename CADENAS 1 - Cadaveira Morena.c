#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
unsigned int i;
char cadena[20]; //No creo que haya un nombre más largo que eso
printf("ingrese un nombre:");
scanf("%s",cadena);
printf("Largo de la cadena:%d\n",strlen(cadena));
for ( i = 0; i < strlen(cadena); i++)
{
 printf("-%c-",cadena[i]);
}
return 0;
}
