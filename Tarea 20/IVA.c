#include<stdio.h>
#include"IVA.h"

int main ()
{
	float cant=0;
	
		printf("Escriba la cantidad total:  ");
		scanf("%f",&cant);
		printf("\n");
		printf("El IVA es: %f\n\n",fniva(cant));
		printf("El subtotal es: %f\n\n",fnsubt(cant));
		printf("Total a pagar: %f\n\n",cant);
  system("PAUSE");	
  return 0;
}
