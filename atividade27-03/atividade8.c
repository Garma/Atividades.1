#include <stdio.h>
   main(){
    int idade, idadeD, idadeT;

    printf ("Informe sua idade: ");
    scanf ("%d", &idade);

    idadeD = idade * 2;
    idadeT = idade * 3;

    printf ("O dobro da sua idade e %d e o triplo da sua idade e %d", idadeD, idadeT);

    return 0;
}