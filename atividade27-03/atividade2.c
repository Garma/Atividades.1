#include <stdio.h>
   main(){
      int a, b, aux;

      printf ("Informe o valor para A :");
      scanf ("%d", &a);
      
      printf ("Informe o valor para B :");
      scanf ("%d", &b);

      printf ("Valores antes da troca:  A = %d e B = %d\n", a, b);

      aux = b;
      b = a;
      a = aux;

      printf ("Valores depois da troca: A = %d e B = %d", a, b);

      return 0;
}