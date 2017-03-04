/*
Ejercicio 1.19
Escriba una función reverse(s) que invierta la cadena de caracteres s. 
Úsela para escribir un programa que invierta su entrada, línea a línea
*/

#include <stdio.h>

#define MAXLINE ((unsigned int)1000)  /* tamaño máximo de la línea de entrada */

int intGetline(char line[], int maxline);
void reverse(char [], int);

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
    intLength = intGetline(arrayCharLine, MAXLINE);
    while (intLength > 0)
    {
        reverse(arrayCharLine, intLength);
        printf("%s\n", arrayCharLine);
        intLength = intGetline(arrayCharLine, MAXLINE);
    }
    
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

void reverse(char arrayInputCharLine[], int intInputArrayLength)
{
    int intStartIndex;
    int intEndIndex;
    char charTempValueForSwap;

    intStartIndex = 0;
    intEndIndex = intInputArrayLength - 1;

    while ((intStartIndex < intEndIndex))
    {
        charTempValueForSwap = arrayInputCharLine[intStartIndex];
        arrayInputCharLine[intStartIndex] = arrayInputCharLine[intEndIndex];
        arrayInputCharLine[intEndIndex] = charTempValueForSwap;

        intStartIndex++;
        intEndIndex--;
    }
}