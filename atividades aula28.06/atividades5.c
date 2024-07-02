#include <stdio.h>
    int main(void){
        float ht, pd, td, vh, sb, sl;

        printf("Horas trabalhadas no mes: ");
        scanf("%f", &ht);

        printf("Valor das horas trabalhadas no mes: ");
        scanf("%f", &vh);

        printf("Valor do percentual de desconto: ");
        scanf("%f", &pd);

        sb = ht * vh;
        td = (pd / 100) * sb;
        sl = sb - td;

        printf("\nResumo do Salario:\n");
        printf("Horas trabalhadas: %.2f\n", ht);
        printf("Salario bruto: R$ %.2f\n", sb);
        printf("Desconto (%.2f%%): R$ %.2f\n", pd, td);
        printf("Salario liquido: R$ %.2f\n", sl);

        return 0;
}