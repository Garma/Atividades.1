#include <stdio.h>
    int main(void){
        int cardapio, valor;

            printf("Codigo Lanche Preco \n 10 Xis Completo R$ 12,00 \n 11 Xis Bacon R$ 16,50 \n 12 Xis de Coracao de boi R$ 14,00 \n 13 Xis de Charque R$ 14,50 \n 14 Xis de Ovelha R$ 20,90 \n 15 Xis de linguica campeira R$ 18,00 \n");

                scanf ("%d", &cardapio);
                switch (cardapio) {
            case 10:
                valor = 12.00;
                printf("Voce escolheu Xis Completo. O valor e: R$ %.2d\n", valor);
                break;
            case 11:
                valor = 16.50;
                printf("Voce escolheu Xis Bacon. O valor e: R$ %.2d\n", valor);
                break;
            case 12:
                valor = 14.00;
                printf("Voce escolheu Xis de Coração de Boi. O valor e: R$ %.2d\n", valor);
                break;
            case 13:
                valor = 14.50;
                printf("Voce escolheu Xis de Charque. O valor e: R$ %.2d\n", valor);
                break;
            case 14:
                valor = 20.90;
                printf("Voce escolheu Xis de Ovelha. O valor e: R$ %.2d\n", valor);
                break;
            case 15:
                valor = 18.00;
                printf("Voce escolheu Xis de Linguica Campeira. O valor e: R$ %.2d\n", valor);
                break;
            default:
                printf("Codigo invalido!\n");
                return 1;
            }

    return 0;
}