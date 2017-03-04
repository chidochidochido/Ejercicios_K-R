/*
Ejercicio 1.9
Escriba un programa que copie su entrada a la salida, reemplazando cada cadena de uno
o más blancos por un solo blanco
*/

#include <stdio.h>

main()
{
    /* VARIABLE DECLARATIONS */
    char charUserInput;

    /* INITIALIZATIONS */
    charUserInput = (char)0;

    /* MAIN LOGIC */
    while(charUserInput != EOF)
    {
        charUserInput = getchar();
        putchar(charUserInput);
        
        while(charUserInput == ' ')
            charUserInput = getchar();
    }
}