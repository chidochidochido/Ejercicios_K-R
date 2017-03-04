/*
Ejercicio 1-13
Escriba un programa que imprima el histograma de las longitudes de las
palabras de su entrada. Es fácil dibujar el histograma con las barras
horizontales; la orientación vertical es un reto mas interesante.
*/

#include <stdio.h>

#define IN  1   /* en una palabra */
#define OUT 0   /* fuera de una palabra */

main()
{
    /* VARIABLE DECLARATIONS */
    char charUserInput;
    int  intState;
    int  intNumCharInWord;
    int  intIndexArrayLongitudPalabras;
    int  intIndexHistogram;
    int  intArrayLongitudPalabras[10] = {0};

    /* INITIALIZATIONS */
    intState = IN;
    intNumCharInWord = 0;
    intIndexArrayLongitudPalabras = 0;
  
    /* MAIN LOGIC */
    while((charUserInput = getchar()) != EOF) {
        if(charUserInput == ' ' || charUserInput == '\t' || charUserInput == '\n') {
            intState = OUT;
            intArrayLongitudPalabras[intNumCharInWord]++;
            intNumCharInWord = 0;
        }    
        else {
            intNumCharInWord++;
            if(intState == OUT) {            
                intState = IN;        
            }               
        }
    }

    /* OUTPUT */
    while(intIndexArrayLongitudPalabras < sizeof(intArrayLongitudPalabras)/sizeof(int)) {
        printf("%d ", intIndexArrayLongitudPalabras);
        
        intIndexHistogram = 0;
        while(intIndexHistogram < intArrayLongitudPalabras[intIndexArrayLongitudPalabras])
        {
            printf("*");
            intIndexHistogram++;
        }
        printf("\n");

        intIndexArrayLongitudPalabras++;
    }
}