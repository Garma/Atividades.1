#include <stdio.h>
    int main(void){
        int n1, n2, n3, troca;

        printf("Informe numeros inteiros diferentes: \n");

        printf ("Primeiro Numero: ");
        scanf ("%i", &n1);

        printf ("Segundo Numero: ");
        scanf ("%i", &n2);

        printf ("Terceiro Numero: ");
        scanf ("%i", &n3);

        if (n1 != n2 && n1 != n3 && n2 != n3) {
            if (n1 > n2) {
                troca = n1;
                n1 = n2;
                n2 = troca;
            }

            if (n1 > n3) {
                troca = n1;
                n1 = n3;
                n3 = troca;
            }

            if (n2 > n3) {
                troca = n2;
                n2 = n3;
                n3 = troca;
            }

        printf("Os numeros em ordem crescente sao: %d, %d, %d ", n1, n2, n3);

    } else {
        printf("Ha numeros iguais.\n");
    }

        return 0;
}