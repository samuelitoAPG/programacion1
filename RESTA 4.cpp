#include <conio.h>
#include <stdio.h>

int main()
{
	int n1, n2, n3, op;
//n1 es el primer numero a ingresar//
//n2 es el segundo numero a ingresar//
//n3 es el tercer numero a ingresar//


	printf( "\n Introduzca primer numero (entero): " );
	scanf( "%d", &n1 );
	printf( "\n Introduzca segundo numero (entero): " );
	scanf( "%d", &n2 );
	printf( "\n Introduzca tercer numero (entero): " );
	scanf( "%d", &n3 );

	op = (n1+n2)/n3;
	
	printf( "\n La op es: %d", op );
	
	getch(); /* Pausa */
	
	return 0;
	
}
