/*
Ejercicio 1.19
Escriba una funci�n reverse(s) que invierta la cadena de caracteres s. 
�sela para escribir un programa que invierta su entrada, l�nea a l�nea
*/

#include <stdio.h>

#define MAXLINE ((unsigned int)1000)  /* tama�o m�ximo de la l�nea de entrada */

int intGetline(char line[], int maxline);
void reverse(char [], int);

/* imprime la l�nea de entrada m�s larga */
main()
{
    /*VARIABLE DECLARATIONS*/
    int intLength;                /* longitud actual de la l�nea */
    int intCharTestValueIndex;
    int charTestValue;
    int intLineIndex;
    char arrayCharLine[MAXLINE];       /* l�nea de entrada actual */

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

/* getline: lee una l�nea en s, regresa su longitud */
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