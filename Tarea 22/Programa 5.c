#include<stdio.h>
#include<stdlib.h>
#include"info.h"
#define MAX 10
int main ()
{
	appInfoData("Ejemplo de punteros y arreglos", "15/11/2017");
	
	int cals [MAX] = {8,9,8,8,6,7,9,8,10,10};
	int *ptrCals;
	int j=0;
	ptrCals=cals; //&cals[0]
	printf("Elemento\tDireccion\t valor\n");
	for (j=0; j<MAX;j++)
		printf("%d              \t%d \t %d\n",j,&cals[j],cals[j]);
		
		printf("---------------------\n");
		
		printf("Direccion a la que apunta: %d\n",ptrCals);
		printf("Valor a la que apunta: %d\n",*ptrCals);
		ptrCals=ptrCals+4;
		printf("Direccion a la que apunta: %d\n",ptrCals);
		printf("Valor a la que apunta: %d\n",*ptrCals);
	
  system("PAUSE");	
  return 0;
}
