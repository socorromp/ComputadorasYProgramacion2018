#include<stdio.h>	
int fnCuadro(int ,int );

int main(){
	
	int a,b;
	printf("Inserta el numero de filas: ");
	scanf("%d",&a);
	printf("Iserta el numero de columnas: ");
	scanf("%d",&b);
	fnCuadro(a,b);

	return 0;


}

int fnCuadro(int l,int m) {
	int j=0;
	int k=0;
	for(j=1;j<=l;j=j+1){

		for(k=1;k<=m;k=k+1){

			printf("*");

		}

		printf("\n");
	}
 printf("\n");
system("PAUSE");	
  return 0;
}
