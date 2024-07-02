#include <stdio.h> 
#include <math.h>
    int main(void){
        float dividendo, divisor, quociente;

        printf("Coloque o dividendo: ");
        scanf("%f", &dividendo);
        printf("Coloque o divisor: ");
        scanf("%f", &divisor);

        quociente = dividendo / divisor;

        printf("Quociente = %f\n", quociente);
        printf("Resto = %f", fmod (dividendo, divisor));

    return 0;
}