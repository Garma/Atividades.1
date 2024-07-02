#include <stdio.h>
    int main(void){
        int f1;

        printf ("Informe o valor para comparacao: ");
        scanf ("%i", &f1);

        if (f1 <= 10)
            printf ("Seu valor e F1");

        else if (f1 > 10 && f1 <= 100) 
            printf ("Seu valor e F2");

        else if (f1 > 100) 
            printf ("Seu valor e F3");

        return 0;
}