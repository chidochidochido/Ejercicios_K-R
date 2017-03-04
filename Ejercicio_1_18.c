/*
Ejercicio 1.18
Escriba un programa que elimine los blancos y los tabuladores
que est�n al final de cada l�nea de entrada, y que borre 
completamente las l�neas en blanco.
*/

#include <stdio.h>

#define MAXLINE ((unsigned int)1000)  /* tama�o m�ximo de la l�nea de entrada */

int intGetline(char line[], int maxline);

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