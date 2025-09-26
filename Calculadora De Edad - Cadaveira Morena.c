#include <stdio.h>

int main()
{
   int Anioactual,Anionac, Mesactual, Mesnac, Diaactual, Dianac, edad;
          printf("TODOS LOS DATOS DEBEN SER INGRESADOS DE FORMA NUMÉRICA POSITIVA\n\n");
   do {
          printf("Ingrese el año actual:\n");
          scanf("%d", &Anioactual);
       if(Anioactual<0)
          printf("ERROR: El dato ingresado debe ser válido\n\n");
   }while (Anioactual<0);
   do {       
          printf("Ingrese el año de nacimiento\n");
          scanf("%d", &Anionac);
       if(Anionac<0)
          printf("ERROR: El dato ingresado debe ser válido\n\n");
   }while (Anionac<0);
   do {
          printf("Ingrese el mes actual\n");
          scanf("%d", &Mesactual);
       if(Mesactual<0|| Mesactual>12)
          printf("ERROR: El dato ingresado debe ser válido\n\n");
   } while (Mesactual>12 || Mesactual<0);
   do {
       printf("Ingrese el mes de nacimiento\n");
       scanf("%d", &Mesnac);
       if(Mesnac<0 || Mesnac>12)
          printf("ERROR: El dato ingresado debe ser válido\n\n");
   } while (Mesnac>12 || Mesnac<0);
   do {
       printf("Ingrese el día actual\n");
       scanf("%d", &Diaactual);
       if(Diaactual>31|| Diaactual<0)
          printf("ERROR: El dato ingresado debe ser válido\n\n");
   } while (Diaactual>31|| Diaactual<0);
   do {
       printf("Ingrese el día de nacimiento\n");
       scanf("%d", &Dianac);
       if(Dianac>31 || Dianac<0)
          printf("ERROR: El dato ingresado debe ser válido\n\n");
   } while (Dianac>31 || Dianac<0); 
       edad=Anioactual-Anionac;
    if(Mesnac>Mesactual){
        edad=edad-1;
    }
    if(Mesnac==Mesactual){
    if (Dianac>Diaactual){
    edad=edad-1;
    }
   }
    if(Mesnac==Mesactual){
    if (Dianac==Diaactual){
    edad=edad+1;
       printf("¡Feliz Cumpleaños!");
    }
}
       printf("Su edad es: %d", edad);
    return 0; 
        }