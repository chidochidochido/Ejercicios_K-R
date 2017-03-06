/*
Ejercicio 1.20
Escriba un programa detab que reemplace tabuladores de la entrada con el número
apropiado de blancos para espaciar hasta el siguiente paro de tabulación.
Considere un conjunto fijo de paros de tabulación. digamos cada n columnas
¿Debe ser n una variable o un parámetro simbólico?
*/
#include <stdio.h>

#define TRUE ((unsigned char)1)
#define FALSE ((unsigned char)0)
#define SPACES_WITHIN_TAB ((unsigned int) 4)

void printStringCharacters(char [], int);
void printTabWithSpaces(int);

main()
{
    char charInputString[] = "\tHello\tWorld\n";

    printStringCharacters(charInputString, sizeof(charInputString)/sizeof(char));
}

void printStringCharacters(char charTestString[], int intSizeTestString)
{
    unsigned int intIndexCharTestString;
    unsigned int intCharactersWithinTab;
    
    intCharactersWithinTab = 0;
    
    for(intIndexCharTestString = 0; intIndexCharTestString < intSizeTestString; intIndexCharTestString++)
    {
        if(charTestString[intIndexCharTestString] == '\t')
        {
            printTabWithSpaces(charTestString, intSizeTestString, intCharactersWithinTab);
        }
        else
        {
            printf("%c", charTestString[intIndexCharTestString]);  
            intCharactersWithinTab++;
            if(intCharactersWithinTab >= SPACES_WITHIN_TAB)
            {
                intCharactersWithinTab = 0;
            }
        }
    }
}

void printTabWithSpaces(char charTestString[], int intSizeTestString, int intCharactersWithinTab)
{ 
    int intPrintSpacesIndex;
    int numSpacesToPrintForTab;
    
    numSpacesToPrintForTab = SPACES_WITHIN_TAB - intCharactersWithinTab;
    for(intPrintSpacesIndex = 0; intPrintSpacesIndex < numSpacesToPrintForTab; intPrintSpacesIndex++)
    {
        printf(" ");
    }
}