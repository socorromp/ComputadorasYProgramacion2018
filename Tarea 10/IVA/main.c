#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float monto=0;
	
		printf("Ingrese el monto:  ");
		scanf("%f",&monto);
		printf("\nEl iva es: %.2f",monto*0.16);
		printf("\n\nEl subtotal es: %.2f",monto);
		printf("\n\nTotal a pagar: %.2f\n\n",monto+(monto*0.16));
	
		
		printf("\n");
  system("PAUSE");	
  return 0;
}
