/*
Ejercicio 1.18
Escriba un programa que elimine los blancos y los tabuladores
que estén al final de cada línea de entrada, y que borre 
completamente las líneas en blanco.
*/

#include <stdio.h>

#define MAXLINE ((unsigned int)1000)  /* tamaño máximo de la línea de entrada */

int intGetline(char line[], int maxline);

/* imprime la línea de entrada más larga */
main()
{
    /*VARIABLE DECLARATIONS*/
    int intLength;                /* longitud actual de la línea */
    int intCharTestValueIndex;
    int charTestValue;
    int intLineIndex;
    char arrayCharLine[MAXLINE];       /* línea de entrada actual */

    /*INITIALIZATIONS*/
    intLineIndex = 0;

    /*MAIN LOGIC*/
    do {
        intLength = intGetline(arrayCharLine, MAXLINE);
        intCharTestValueIndex = intLength - 1; 
        charTestValue = arrayCharLine[intCharTestValueIndex];
            
        while(charTestValue == ' ' || charTestValue == '\t')
        {
            arrayCharLine[intCharTestValueIndex] = '\0';
            intCharTestValueIndex--;
            charTestValue = arrayCharLine[intCharTestValueIndex];
        }

        printf("%s\n", arrayCharLine);
    } while(intLength > 0);

    return 0;
}

/* getline: lee una línea en s, regresa su longitud */
int intGetline(char acInputString[], int iInputStringLimit)
{
    /*VARIABLE DECLARATIONS*/
    int intInputChar;
    int intIndex = 0;

    /*MAIN LOGIC*/
    intInputChar = getchar();
    for( ;(intIndex < iInputStringLimit-1) && (intInputChar != EOF) && (intInputChar != '\n'); intIndex++) {
        acInputString[intIndex] = intInputChar;
        intInputChar = getchar();
        
    }

    acInputString[intIndex] = '\0';
        
    return intIndex;
}