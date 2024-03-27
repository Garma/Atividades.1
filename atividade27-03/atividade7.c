#include <stdio.h>
   main(){
    float litrosUsados, distanciaViagem;

    printf ("Informe a distancia do trajeto que voce planeja percorrer: ");
    scanf ("%f", &distanciaViagem);

    litrosUsados = distanciaViagem / 12;

    printf ("A quantidade de combustivel, em Litros, que voce precisara para a viagem e: %.2f", litrosUsados);

    return 0;
}