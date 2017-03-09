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
    int  intArrayLongitudPalabras[10] = {0};
    int  intMaxOccurrences;
    int  intSearchIndexWithMaxOcurrences;
    int  intIndexHistogramOccurrences;
    /* INITIALIZATIONS */
    intState = IN;
    intNumCharInWord = 0;
    intIndexArrayLongitudPalabras = 1;
  
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

    intMaxOccurrences = 0;
    for(intSearchIndexWithMaxOcurrences = 0; intSearchIndexWithMaxOcurrences < sizeof(intArrayLongitudPalabras) / sizeof(int); intSearchIndexWithMaxOcurrences++)
    {
        if(intMaxOccurrences < intArrayLongitudPalabras[intSearchIndexWithMaxOcurrences])
        {
            intMaxOccurrences = intArrayLongitudPalabras[intSearchIndexWithMaxOcurrences];
        }
    }


    /* OUTPUT */
    for(intIndexHistogramOccurrences = intMaxOccurrences; intIndexHistogramOccurrences > 0; intIndexHistogramOccurrences--)
    {
        for(intIndexArrayLongitudPalabras = 1; intIndexArrayLongitudPalabras <= sizeof(intArrayLongitudPalabras)/sizeof(int); intIndexArrayLongitudPalabras++)
        {
            if(intArrayLongitudPalabras[intIndexArrayLongitudPalabras] >= intIndexHistogramOccurrences)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
    printf("1\t2\t3\t4\t5\t6\t7\t8\t9\n");
}