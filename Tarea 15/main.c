#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

int var1=5;
int var2=2;
int resultado=0;
	
	//suma
	resultado=var1 + var2;
	printf("%d + %d = %d\n",var1,var2,resultado);
	
	
	//resta
	resultado=var1 - var2;
	printf("%d - %d = %d\n",var1,var2,resultado);

	//multiplicacion
	resultado=var1 * var2;
	printf("%d * %d = %d\n",var1,var2,resultado);

	//division
	
	resultado=var1 / var2;
		printf("%d / %d = %d\n",var1,var2,resultado);
	
	//modulo		
	resultado=var1 % var2;
	printf("%d mod %d = %d\n",var1,var2,resultado);

  system("PAUSE");	
  return 0;
}
