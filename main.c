#include <stdio.h>
#include <stdlib.h>

void fnCuadro(int filas,int columnas){
	int i,j;
	printf("\n");
	for(i=1;i<=filas;i++){
			for(j=1;j<columnas;j++){
				printf(" + ");
			}
		printf(" +\n\n");
	}
}

int main(int argc, char *argv[]) {
	
	int filas, columnas;
	char cont;
	printf("Este programa imprime un cuadrado de simbolos del tama%co que sea dado\n");
	do{
	
		printf("\nIngresa el numero de filas que deseas:\n");
		scanf("%i",&filas);
		printf("Ingresa el numero de columnas que deseas:\n");
		scanf("%i",&columnas);
	
		fnCuadro(filas,columnas);
		
		fflush(stdin);
		printf("\n�Quieres construir otro cuadrado? \ns/n\n");
		scanf("%c",&cont);
		
	}while(cont=='s' || cont=='S');
	
	system("PAUSE");
	return 0;
}
