#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int num1=0;
int num2=0;
int num3=0;
 
 printf("Dame el primer número:");
 scanf("%d", & num1);
 printf("Dame el segundo número:");
 scanf("%d",& num2);
 printf("Dame el tercer número:");
 scanf("%d",& num3);
 
 if(num1>0 && num2>0 && num3>0 && (num1!=num2) && (num1!=3) && (num2!=3))
 {
           if (num1>num2 && num1>num3) {
                          printf("%d es el mayor\n", num1);
                          }
           if (num2>num1 && num2>num3) {
                          printf("%d es el mayor\n", num2);
                          }
           if (num3>num1 && num3>num2) {
                          printf("%d es el mayor\n", num3);
                          }
} else{

 printf("Los numeros deben ser mayores que 0 y diferentes entre sí.\n");
}
  system("PAUSE");
  	

}
