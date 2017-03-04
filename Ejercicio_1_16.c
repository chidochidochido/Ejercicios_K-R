/*
Ejercicio 1.16
Corrija la rutina principal del programa de la l�nea m�s larga de modo que imprima correctamente
la longitud de l�neas de entrada arbitrareamente largas, y tanto texto como sea posible.
*/

#include <stdio.h>

#define MAXLINE ((unsigned int)1000)  /* tama�o m�ximo de la l�nea de entrada */

int iGetline(char line[], int maxline);
void copy(char to[], char from[]);

/* imprime la l�nea de entrada m�s larga */
main()
{
    /*VARIABLE DECLARATIONS*/
    int iLength;                /* longitud actual de la l�nea */
    int iMax;                /* m�xima logitud vista hasta el momento */
    char acLine[MAXLINE];    /* l�nea de entrada actual */
    char acLongest[MAXLINE]; /* la l�nea m�s larga se guarda aqu� */

    /*INITIALIZATIONS*/
    iMax = 0;

    /*MAIN LOGIC*/
    while((iLength = iGetline(acLine, MAXLINE)) > 0)
        if(iLength > iMax) {
            iMax = iLength;
            copy(acLongest, acLine);
        }
    if(iMax > 0)      /* hubo una l�nea */
        printf("%s", acLongest);

    
    return 0;
}

/* getline: lee una l�nea en s, regresa su longitud */
int iGetline(char acInputString[], int iInputStringLimit)
{
    /*VARIABLE DECLARATIONS*/
    int iInputChar, iIndex;

    /*MAIN LOGIC*/
    iInputChar = getchar();
    for(iIndex = 0; (iInputChar < iInputStringLimit-1) && (iInputChar != EOF) && (iInputChar != '\n'); ++iIndex) {
        acInputString[iIndex] = iInputChar;
        iInputChar = getchar();
    }
    if( iInputChar == '\n') {
        acInputString[iIndex] = iInputChar;
        ++iIndex;
    }
    acInputString[iIndex] = '\0';
    
    
    return iIndex;
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
        ++iIndex;
        to[iIndex] = from[iIndex];
    }
}