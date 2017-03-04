/*
Ejercicio 1-3
Modifique el programa de conversión de temperaturas de modo que escriba
un encabezado sobre la tabla.
*/

#include <stdio.h>

/* imprime la tabla Fahrenheit-Celsius 
       para fahr = 0, 20, ..., 300; versión de punto flotante */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("FAHR  CELSIUS\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr -32.0);
        printf("%4.0f %8.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
