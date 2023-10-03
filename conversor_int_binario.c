#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero;
   int bin[8]; 
   int aux;

   printf("Enter an integer: ");
   scanf("%d", &numero);

   for (aux = 7; aux >= 0; aux--)
   {
      if (numero % 2 == 0)
         bin[aux] = 0;
      else
         bin[aux] = 1;
      numero = numero / 2;
   }

   for (aux = 0; aux < 8; aux++)
       printf("%d", bin[aux]);

   printf("\n");

   return 0;
}