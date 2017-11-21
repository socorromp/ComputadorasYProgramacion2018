#include<stdio.h>
#include<string.h>
#include"alumno.h"
#include"alumnop.h"
#define MAX 3
int main ()
{
	ALUMNO lista[MAX];
	int j=0;
	for (j=0;j<MAX;j++)
	{
	printf("\nDatos alumno %d\n",j+1);
	lista[j]=nuevoAlumno();
}
	for (j=0;j<MAX;j++)
	{
		imprimeAlumno(lista[j]);
	}

  system("PAUSE");	
  return 0;
}
