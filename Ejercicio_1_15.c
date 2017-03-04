/*
Ejercicio 1.15
Escriba de nuevo el programa de conversi�n de temperatura de
la secci�n 1.2, de modo que utilice una funci�n para la conversi�n
*/

#include <stdio.h>

/* imprime la tabla Fahrenheit-Celsius 
       para fahr = 0, 20, ..., 300; versi�n de punto flotante */

float floatFahrenheit2Celcius(float);

main()
{
    /* VARIABLE DECLARATIONS */
    float fahr, celsius;
    int lower, upper, step;

    /* INITIALIZATIONS */
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;

    /* MAIN LOGIC */
    printf("FAHR  CELSIUS\n");
    while (fahr <= upper) {
        celsius = floatFahrenheit2Celcius(fahr);
        printf("%4.0f %8.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

float floatFahrenheit2Celcius(float floatInputFahrenheit)
{
    float floatOutputCelcius;

    floatOutputCelcius = (5.0/9.0) * (floatInputFahrenheit - 32.0);

    return floatOutputCelcius;
}