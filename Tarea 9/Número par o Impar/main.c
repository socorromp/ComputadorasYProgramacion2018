#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int c=0;
      printf("Ingrese un numero: ");
      scanf("\n%d",&c);
      if(c%2==0)
    printf("El numero es par.\n");
   else 
    printf("El numero es impar.\n");
    printf("\n");	
  system("PAUSE");	
  return 0;
}
