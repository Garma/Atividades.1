#include <stdio.h>
    int main(void){
    char nome1[50], nome2[50];
    float altura1, altura2, peso1, peso2;

    printf("Insira o nome da primeira pessoa: ");
    scanf("%49s", nome1);

    printf("Insira a altura da primeira pessoa (em metros): ");
    scanf("%f", &altura1);

    printf("Insira o peso da primeira pessoa (em kg): ");
    scanf("%f", &peso1);

    printf("Insira o nome da segunda pessoa: ");
    scanf("%49s", nome2);

    printf("Insira a altura da segunda pessoa (em metros): ");
    scanf("%f", &altura2);

    printf("Insira o peso da segunda pessoa (em kg): ");
    scanf("%f", &peso2);

    if (peso1 > peso2) {
        printf("A pessoa mais pesada e: %s\n", nome1);
    } else if (peso2 > peso1) {
        printf("A pessoa mais pesada e: %s\n", nome2);
    } else {
        printf("Ambas as pessoas têm o mesmo peso.\n");
    }

    if (altura1 > altura2) {
        printf("A pessoa mais alta e: %s\n", nome1);
    } else if (altura2 > altura1) {
        printf("A pessoa mais alta e: %s\n", nome2);
    } else {
        printf("Ambas as pessoas têm a mesma altura.\n");
    }

    return 0;
}