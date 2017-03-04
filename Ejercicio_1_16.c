/*
Ejercicio 1.16
Corrija la rutina principal del programa de la l�nea m�s larga de modo que imprima correctamente
la longitud de l�neas de entrada arbitrareamente largas, y tanto texto como sea posible.
*/

#include <stdio.h>

#define MAXLINE ((unsigned int)10)  /* tama�o m�ximo de la l�nea de entrada */

int intGetline(char line[], int maxline);
void copy(char to[], char from[]);

/* imprime la l�nea de entrada m�s larga */
main()
{
    /*VARIABLE DECLARATIONS*/
    int intLength;                /* longitud actual de la l�nea */
    int iMax;                   /* m�xima logitud vista hasta el momento */
    int iGetCharValue;
    char acLine[MAXLINE];       /* l�nea de entrada actual */
    char acLongest[MAXLINE];    /* la l�nea m�s larga se guarda aqu� */

    /*INITIALIZATIONS*/
    iMax = 0;

    /*MAIN LOGIC*/
    do {
        intLength = intGetline(acLine, MAXLINE);

        /**Obtiene caracteres de l�neas arbitrariamente largas**/
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
        
    if(iMax > 0) {/* hubo una l�nea */
        printf("%s\n", acLongest);
       printf("Max Length: %d\n", iMax);
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