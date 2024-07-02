#include <stdio.h>
    int main(void){
        int Kmh;
        float Mps;

        printf ("Informe a velocidade do veiculo em Km/H :");
        scanf ("%d", &Kmh);

        Mps = Kmh / 3,6;

        printf ("A velocidade em M/s e: %f", Mps);

        return 0;
}