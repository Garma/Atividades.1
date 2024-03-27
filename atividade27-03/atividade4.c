#include <stdio.h>
   main(){
      int valor1, valor2, valor3, resultado, resultado2;

      printf ("Informe o primeiro valor :");
      scanf ("%d", &valor1);
      
      printf ("Informe o segundo valor :");
      scanf ("%d", &valor2);

      printf ("Informe o terceiro valor :");
      scanf ("%d", &valor3);

      resultado = valor1 + valor2 + valor3;
      resultado2 = resultado*resultado;

      printf ("O resultado do quadrado da soma dos tres valores e:  %d", resultado2);

      return 0;
}      