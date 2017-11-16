#include<stdio.h>
#include<stdlib.h>
#include "info.h"
int main ()
{

	appInfoData("Ejemplo de punteros","15/11/2017");
	
	int a;
	a=10;
	int *puntero;
	puntero=&a;
	
	printf("%d\n", *puntero);
	printf("%d\n", puntero);
	printf("%d\n", a);
	printf("%d\n", &a);

  system("PAUSE");	
  return 0;
}
