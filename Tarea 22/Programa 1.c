#include<stdio.h>
#include<stdlib.h>
#include "info.h"

int main (int argc, char const *argv[])
{
	appInfoData("Ejemplo de Punteros","15/11/2017");
	int a;
	a=10;
	int *puntero;
	puntero=&a;
	printf("%d\n",*puntero);
	
  system("PAUSE");	
  return 0;
}
