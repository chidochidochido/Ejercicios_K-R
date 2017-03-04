/* 
Ejercicio 1.12
Escriba un programa que imprima su entrada una palabra por línea 
*/

#include <stdio.h>

#define IN  1   /* en una palabra */
#define OUT 0   /* fuera de una palabra */

main()
{
    /* VARIABLE DECLARATIONS */
    int intState;
    char charUserInput;
    
    /* INITIALIZATIONS */
    intState = OUT;
    
    /* MAIN LOGIC */
    while((charUserInput = getchar()) != EOF) {
        if(charUserInput == ' ')
            intState = OUT;
        else if(intState == OUT) {
            intState = IN;
            putchar('\n');
        }
        putchar(charUserInput);
    }
}