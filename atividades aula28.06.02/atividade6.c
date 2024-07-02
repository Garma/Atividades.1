#include <stdio.h>
    int main(void){
        int n1, n2;

        printf("Insira dois numeros: \n");

        printf ("Primeiro Numero: ");
        scanf ("%d", &n1);

        printf ("Segundo Numero: ");
        scanf ("%d", &n2);

        if (n2 != 0) {
        if (n1 % n2 == 0) {
            printf("%d e multiplo de %d\n", n1, n2);
        } else {
            printf("%d nao e mmltiplo de %d\n", n1, n2);
        }
        } else {
            printf("Divisão por zero não é permitida.\n");
        }

    return 0;

    }