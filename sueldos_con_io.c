/* 
*	
*	Programa usado para calcular el sueldo de un empleado con I/O
*
*/ 

#include <stdio.h>
#include <curses.h>


//Definición de clrscr()
void clrscr(void)
{
    system("clear");
}


int main() {
	clrscr();

/* Inicialización de variables */
	int emp, valh, canth, sdo;

/* Asignación de valores*/
	puts("Ingresar código de empleado: ");
	scanf("%d", &emp);
	puts("Ingresar valor de la hora: ");
	scanf("%d", &valh);
	puts("Ingresar cantidad de horas trabajadas: ");
	scanf("%d", &canth);

	
/* Calculaciones */
	sdo = valh * canth; 
	
/* Impresión de resultados */
	printf("El empleado %d cobra %d\n", emp, sdo);
	return 0;

}
