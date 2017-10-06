#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int dia=0;
	printf ("Ingrese un numero: ");
	scanf("\n%d",&dia);
	switch (dia)
	{
	case 1:
	 printf("\nDomingo");
	break ;
	case 2:
	 printf("\nLunes\n");
	 break;
	case 3:
	 printf ("\nMartes\n");
	 break;
	case 4:
	 printf("\nMiercoles\n");
	 break;
	case 5:
	 printf("\nJueves\n");
	 break;
	case 6:
	 printf("\nViernes\n");
	 break;
	case 7:
	 printf("\nSabado\n");
	 break;
	 default:
	 printf("\nEse numero no corresponde con algun dia de la semana\n");
	 
	}
	printf("\n");
  system("PAUSE");	
  return 0;
}
