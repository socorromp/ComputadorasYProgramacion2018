#include<stdio.h>
#include<string.h>
struct alumnos
{
	int edad;
	char nombre[60];
	char genero;
	char carrera;
	char nCuenta[10];
};
typedef struct alumnos ALUMNO;

int main ()
{
	ALUMNO var1;
	
	printf ("Introduce la edad: ");
	scanf("%d",&var1.edad);
	
	printf("Introduce el nombre: ");
	fflush (stdin);
	gets(var1.nombre);
	
	printf("\nEdad: %d\nNombre: %s", var1.edad,var1.nombre);
	
	printf("\n\n");
  
  system("PAUSE");	
  return 0;
}
