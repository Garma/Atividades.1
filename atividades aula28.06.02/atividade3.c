#include <stdio.h>
    int main(void){
        float X, Y, Z;

        printf ("Primeiro Numero: ");
        scanf ("%f", &X);

        printf ("Segundo Numero: ");
        scanf ("%f", &Y);

        printf ("Terceiro Numero: ");
        scanf ("%f", &Z);

        if (X + Y > Z)
            printf ("A soma do primeiro e segundo numero e maior que o terceiro");
        
        if (X + Y < Z)
            printf ("A soma do primeiro e segundo numero e menor que o terceiro");

        if (X + Y == Z)
            printf ("A soma do primeiro e segundo numero e igual que o terceiro");
    
    return 0;
}