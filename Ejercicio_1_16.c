/*
Ejercicio 1.16
Corrija la rutina principal del programa de la línea más larga de modo que imprima correctamente
la longitud de líneas de entrada arbitrareamente largas, y tanto texto como sea posible.
*/

#include <stdio.h>

#define MAXLINE ((unsigned int)10)  /* tamaño máximo de la línea de entrada */

int intGetline(char line[], int maxline);
void copy(char to[], char from[]);

/* imprime la línea de entrada más larga */
main()
{
    /*VARIABLE DECLARATIONS*/
    int intLength;                /* longitud actual de la línea */
    int iMax;                   /* máxima logitud vista hasta el momento */
    int iGetCharValue;
    char acLine[MAXLINE];       /* línea de entrada actual */
    char acLongest[MAXLINE];    /* la línea más larga se guarda aquí */

    /*INITIALIZATIONS*/
    iMax = 0;

    /*MAIN LOGIC*/
    do {
        intLength = intGetline(acLine, MAXLINE);

        /**Obtiene caracteres de líneas arbitrariamente largas**/
        if(intLength == MAXLINE - 1)
        {
            iGetCharValue = getchar();
            while((iGetCharValue != EOF) && (iGetCharValue != '\n'))
            {
                intLength++;
                iGetCharValue = getchar();
            }
        }
        /******************************************************/

        if(intLength > iMax) {
            iMax = intLength;
            copy(acLongest, acLine);
        }
    } while(intLength > 0);
        
    if(iMax > 0) {/* hubo una línea */
        printf("%s\n", acLongest);
       printf("Max Length: %d\n", iMax);
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

/*copy: copia 'from' en 'to'; supone que to es suficientemente grande */
void copy(char to[], char from[])
{
    /*VARIABLE DECLARATIONS*/
    int iIndex;

    /*MAIN LOGIC*/
    iIndex = 0;
    to[iIndex] = from[iIndex];
    while(to[iIndex] != '\0') {
        iIndex++;
        to[iIndex] = from[iIndex];
    }
}