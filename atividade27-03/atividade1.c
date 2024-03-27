#include <stdio.h>
   main(){
      float pi = 3.14;
      float altura, raio, volume;
      
      printf ("Informe o altura (em centimetros) da lata cilindrica: ");
      scanf ("%f", &altura);
      
      printf ("Informe o raio (em centimetros) da lata cilindrica: ");
      scanf ("%f", &raio);

      volume = pi * (raio * raio) * altura;

      printf ("O volume da lata cilindrica e %.2f", volume);

      return 0;
   }