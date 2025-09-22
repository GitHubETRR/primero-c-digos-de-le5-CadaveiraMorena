#include <stdio.h>
void MostrarHorarios(void);

int main()
{
	int OPCION, HUESPEDES;
	do {
		printf("\n\n---EL MIRADOR DEL SOL---");
		printf("\n¡Bienvenido/a a nuestro hotel! Seleccione una opción...\n\n");

		printf("OPCICÓN 1 - HORARIOS DEL HOTEL\n");
		printf("OPCICÓN 2 - HABITACIONES DISPONIBLES\n");
		printf("OPCICÓN 3 - SALIR\n");
		scanf("%d", &OPCION);

		switch(OPCION) {
		case 1:
			MostrarHorarios();
			break;

		case 2:
			printf("---ASIGNACICÓN DE HABITACICÓN----\n");
			printf("Ingrese el número de huéspedes:");
			scanf("%d", &HUESPEDES);
			switch(HUESPEDES) {
			case 1:
				printf("-HABITACIONES SINGULARES-");
				printf("\nHabitación 101");
				printf("\nHabitación 102");
				printf("\nHabitación 103");
				break;
			case 2:
				printf("-HABITACIONES DOBLES-");
				printf("\nHabitación 115");
				printf("\nHabitación 116");
				printf("\nHabitación 117");
				break;
			case 3:
				printf("-HABITACIONES TRIPLES-");
				printf("\nHabitación 202");
				printf("\nHabitación 203");
				printf("\nHabitación 204");
				break;
			case 4:
				printf("-HABITACIONES FAMILIARES-");
				printf("\nHabitación 262");
				printf("\nHabitación 263");
				printf("\nHabitación 264");
				break;
			default:
				printf("\nERROR: No contamos con una habitación con esa capacidad.");
				break;
			}
			break;
		case 3:
			printf("¡Gracias por visitar El Mirador del Sol!");
			break;
		default:
			printf("ERROR: Ingrese una opción válida");
			break;
		}
	} while (OPCION!=3);
	return 0;
}
void MostrarHorarios(void){
    printf("---HORARIOS DEL HOTEL---\n");
			for(int i=9; i<=20; i=i+1)
			{
				printf("%d:00 hs\n", i);
			}
}