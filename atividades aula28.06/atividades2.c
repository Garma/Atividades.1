#include <stdio.h>
   main(){
    float x, y;
    int result;

    printf ("Informe o valor para x :");
    scanf ("%f", &x);
      
    printf ("Informe o valor para y :");
    scanf ("%f", &y);

    result = x != y;
    printf ("Resultado: %d", result);

    return 0;
}