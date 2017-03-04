/*
Ejercicio 1.5
Modifique el programa de conversión de temperaturas de manera que escriba
la tabla en orden inverso, esto es, desde 300 grados hasta 0
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

    fahr = upper;
    while (fahr >= lower) {
        celsius = (5.0/9.0) * (fahr -32.0);
        printf("%4.0f %8.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
}
