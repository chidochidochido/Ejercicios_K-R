/*
Ejercicio 1-4
Escriba un programa que imprima la tabla correspondiente Celsius a Fahrenheit
*/

#include <stdio.h>


main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 5;

    printf("CELSIUS   FAHR\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%7.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
