#include <stdio.h>
    main(){
        float fahrenheit, celsius;

        printf ("Informe a temperatura em farenheit: ");
        scanf ("%f", &fahrenheit);

        celsius = (fahrenheit - 32) * 5 / 9;

        printf("O resultado da sua conversao e: %f", celsius);

    return 0;
}