#include <stdio.h>
   main(){
    float valorReal, cotacaoDolar, valorConvertido;

    printf ("Informe o valor em Real (R$) a ser convertido: ");
    scanf ("%f", &valorReal);

    printf ("Informe a cotacao atual do Dolar ($): ");
    scanf ("%f", &cotacaoDolar);

    valorConvertido = valorReal / cotacaoDolar;

    printf ("Valor a ser convertido: %.2f\n", valorReal, "R$");
    printf ("Cotação do dolar hoje: %.2f\n", cotacaoDolar, "$");
    printf ("Resultado da conversao: %.2f\n", valorConvertido, "$");

    return 0;
}