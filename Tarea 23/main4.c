#include<stdio.h>
#include<string.h>
#include"alumno.h"
#include"alumnop.h"

int main ()
{
	ALUMNO var1;
	var1=nuevoAlumno();
	imprimeAlumno(var1);
 
     printf("\n\n");
  system("PAUSE");	
  return 0;
}
