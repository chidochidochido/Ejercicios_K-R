/*
Ejercicio 1.14
Escriba un programa que imprima el histograma de las frecuencias con que se 
presentan diferentes caracteres leídos a la entrada.
*/

#include <stdio.h>

main()
{
    /* VARIABLE DECLARATIONS */
    int intArrayCharOccurrences[128] = {0};
    int intIndexArrayCharOccurrences;
    int intIndexHistogram;
    char charInputCharacter;

    intIndexArrayCharOccurrences = 0;
    intIndexHistogram = 0;

    /* MAIN LOGIC */
    charInputCharacter = getchar();
    while(charInputCharacter != EOF) {
        intArrayCharOccurrences[(int)charInputCharacter]++;
        charInputCharacter = getchar();
    }

    /* OUTPUT */
    while(intIndexArrayCharOccurrences < sizeof(intArrayCharOccurrences)/sizeof(int)) {
        printf("%c ", (char)intIndexArrayCharOccurrences);
        
        intIndexHistogram = 0;
        while(intIndexHistogram < intArrayCharOccurrences[intIndexArrayCharOccurrences])
        {
            printf("*");
            intIndexHistogram++;
        }
        printf("\n");

        intIndexArrayCharOccurrences++;
    }
}