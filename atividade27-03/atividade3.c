#include <stdio.h>
   main(){
      int valor1, valor2, valor3, resultado;

      printf ("Informe o primeiro valor :");
      scanf ("%d", &valor1);
      
      printf ("Informe o segundo valor :");
      scanf ("%d", &valor2);

      printf ("Informe o terceiro valor :");
      scanf ("%d", &valor3);

      resultado = valor1 * valor1 + valor2 * valor2 + valor3 * valor3;

      printf ("O resultado da soma dos quadrados dos tres valores e: %d", resultado);

      return 0;
}