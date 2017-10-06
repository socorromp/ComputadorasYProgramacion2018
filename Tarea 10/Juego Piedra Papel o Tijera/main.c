#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num1, num2;
	printf("Piedra: 1  Papel: 2  Tijera: 3\n\nJugador 1: ");
	scanf("%d",&num1);
	printf("Jugador 2: ");
	scanf("%d",&num2);
	if (num1==1&&num2==2)
	  printf("\nPapel gana a piedra\nJugador 2 gana\n");
	if (num1==2&&num2==3)
		printf("\nTijera gana a papel\nJugador 2 gana\n");
	if (num1==1&&num2==3)
		printf("\nPiedra gana a tijera\nJugador 1 gana\n");
	if (num1==3&&num2==1)
		printf("\nPiedra gana a tijera\nJugador 2 gana\n");
	if (num1==2&&num2==1)
		printf("\nPapel gana a piedra\nJugador 1 gana\n");
	if (num1==3&&num2==2)
		printf("\nTijera gana a papel\nJugador 1 gana\n");
	if (num1==num2)
		printf("\nEmpate\n");
	    

		printf("\n");
  system("PAUSE");	
  return 0;
}
