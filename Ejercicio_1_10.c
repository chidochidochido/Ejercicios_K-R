/*
Ejercicio 1.10
Escriba un programa que copie su entrada a la salida, reemplazando cada tabulación
por \t, cada retroceso por \b y cada diagonal invertida por \\. Esto hace que las
tabulaciones y los espacios sean visibles sin confusiones.
*/

/*TODO: How to get the backspace?
Tried getch and putch from conio.h but then
I can't get the EOF to work */

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
        
        if(charUserInput == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if(charUserInput == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if(charUserInput == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
        {
            putchar(charUserInput);
        }
    }
}