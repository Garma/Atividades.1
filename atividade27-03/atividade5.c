#include <stdio.h>
   main(){
    float valor1, valor2, soma, subtracao, multiplicacao, divisao;
    
    printf ("Informe o primeiro valor :");
    scanf ("%f", &valor1);
      
    printf ("Informe o segundo valor :");
    scanf ("%f", &valor2);

    soma = valor1 + valor2;
    subtracao = valor1 - valor2;
    multiplicacao = valor1 * valor2;
    divisao = valor1 / valor2;

    printf ("O resultado das quatro operacoes e: ");
    printf ("Soma = %.2f\n", soma);
    printf ("Subtracao = %.2f\n", subtracao);
    printf ("Multiplicacao = %.2f\n", multiplicacao);
    printf ("Divisao = %.2f\n", divisao);

    return 0;
}