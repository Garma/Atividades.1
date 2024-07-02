#include <stdio.h>
    int main(void){
        float n1, n2, troca;

        printf("Insira dois numeros: \n");

        printf ("Primeiro Numero: ");
        scanf ("%f", &n1);

        printf ("Segundo Numero: ");
        scanf ("%f", &n2);

         if (n1 != n2 || n1 == n2){
            if (n2 > n1) {
                troca = n2;
                n2 = n1;
                n1 = troca;
            }

            printf ("Seus numeros sao %.2f, %.2f", n1, n2);

         } else {
            printf("Ha numeros invalidos.\n");

         }
        
    return 0;
}