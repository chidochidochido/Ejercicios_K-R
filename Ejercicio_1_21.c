/*
Ejercicio 1.21
Escriba un programa entab que reemplace cadenas de blancos por el mínimo de tabuladores
y blancos para obtener el mismo espaciado. Considere los paros de tabulación de igual
manera que para detab. Cuando un tabulador o un simple espacio en blanco fuese suficiente
para alcanzar un paro de tabulación, ¿a cuál se le debe dar preferencia?
*/

#include <stdio.h>

#define TRUE ((unsigned char)1)
#define FALSE ((unsigned char)0)
#define SPACES_WITHIN_TAB ((unsigned int) 7)

void printStringCharacters(char [], int);
void printTabWithSpaces(int);
int  intCountSpaces(char [], int, int);


main()
{ 
    char charInputString[] = "ab      cd";    
    printStringCharacters(charInputString, sizeof(charInputString)/sizeof(char));
    printf("ab\tcd\n");
}

void printStringCharacters(char charTestString[], int intSizeTestString)
{
    unsigned int intIndexCharTestString;
    unsigned int intContinuousNumSpaces;
    unsigned int intNumTabs;
    unsigned int intNumSpaces;
    unsigned int intPrintTabsIndex;
    unsigned int intPrintSpacesIndex;

    intContinuousNumSpaces = 0;

    for(intIndexCharTestString = 0; intIndexCharTestString < intSizeTestString; intIndexCharTestString++)
    {
        if(charTestString[intIndexCharTestString] == ' ')
        {
            intContinuousNumSpaces++; 
        }
        else
        {            
            intNumTabs   = intContinuousNumSpaces / SPACES_WITHIN_TAB;
            intNumSpaces = intContinuousNumSpaces % SPACES_WITHIN_TAB;
            
            intContinuousNumSpaces = 0;
            for(intPrintTabsIndex = 0; intPrintTabsIndex < intNumTabs; intPrintTabsIndex++)
                printf("\t");
            
            for(intPrintSpacesIndex = 0; intPrintSpacesIndex < intNumSpaces; intPrintSpacesIndex++)
                printf(" ");
            
            printf("%c", charTestString[intIndexCharTestString]);
        }
    }
    printf("\n");
}