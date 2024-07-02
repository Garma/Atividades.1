#include <stdio.h>
    int main(void){
        float nota1, nota2, media;

        printf ("Calculo da media do aluno: \n");

        printf ("Insira a nota do primeiro semestre:");
        scanf ("%f", &nota1);

        printf ("Insira a nota do primeiro semestre:");
        scanf ("%f", &nota2);

        media = (nota1 + nota2) / 2;
        
        if (media < 4.9) {
            printf("Sua nota foi %.1f insuficiente :( \n", media);
        } else if (media >= 5.0 && media <= 6.4) {
            printf("Sua nota foi %.1f regular :| \n", media);
        } else if (media >= 6.5 && media <= 8.4) {
            printf("Sua nota foi %.1f boa :) \n", media);
        } else if (media >= 8.5 && media <= 10.0) {
            printf("Sua nota foi %.1f otima :) \n", media);
        } else {
            printf("Nota invalida.\n");
        }

    return 0;

}