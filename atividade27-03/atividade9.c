#include <stdio.h>
   main(){
    int idade1, idade2, idade3, idade4;
    float media;

    printf ("Informe a idade da primeira pessoa: ");
      scanf ("%d", &idade1);
      
      printf ("Informe a idade da segunda pessoa: ");
      scanf ("%d", &idade2);

      printf ("Informe a idade da terceira pessoa: ");
      scanf ("%d", &idade3);

      printf ("Informe a idade da quarta pessoa: ");
      scanf ("%d", &idade4);

      media = (idade1 + idade2 + idade3 + idade4) / 4;

      printf ("A media da idade das quatro pessoas é: %.2f", media);

    return 0;
}