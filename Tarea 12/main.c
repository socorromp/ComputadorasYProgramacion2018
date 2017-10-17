#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[])
{
    int num1=0;
    float num2=0;
    float num3=0;
    
    printf ("Dame el primer numero:");
    scanf ("%d", & num1);
    printf ("Dame el segundo numero:");
    scanf ("%f", & num2);
    printf ("Dame el tercer numero:");
    scanf ("%f", & num3);
    printf ("\n\n");
    
    if(num1>0 && num2>0 && num3>0 && (num1!=num2) && (num1!=3) && (num2!=3))
 {
           if (num1>num2 && num1>num3) {
                          printf("\n%d es el mayor\n", num1);
                          }
           if (num2>num1 && num2>num3) {
                          printf("\n%.2f es el mayor\n", num2);
                          }
           if (num3>num1 && num3>num2) {
                          printf("\n%.2f es el mayor\n", num3);
                          }
} else{

 printf("Los numeros deben ser mayores que 0 y diferentes entre sí.\n");
}

       
       printf ("\n\nEl primer numero es: %d\n", num1);
       printf ("\nEl segundo numero es: %.2f\n", num2);
       printf ("\nEl tercer numero es: %.2f\n", num3);
       
       printf ("\n\n");
       

    
  
  system("PAUSE");	
  return 0;
}      
