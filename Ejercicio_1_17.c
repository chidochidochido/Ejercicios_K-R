/*
Ejercicio 1.17
Escriba un programa que imprima todas las l�neas de entrada 
que sean mayores de 80 caracteres
*/

#include <stdio.h>

#define MAXLINE ((unsigned int)1000)  /* tama�o m�ximo de la l�nea de entrada */
#define MIN_NUM_CHAR_TO_PRINT  ((unsigned int)10)  

int intGetline(char [], int);

/* imprime la l�nea de entrada m�s larga */
main()
{
    /*VARIABLE DECLARATIONS*/
    int intLength;                /* longitud actual de la l�nea */
    char arrayCharLine[MAXLINE];       /* l�nea de entrada actual */


    /*MAIN LOGIC*/
    do {
        intLength = intGetline(arrayCharLine, MAXLINE);

        if(intLength >= MIN_NUM_CHAR_TO_PRINT)
        {
            printf("%s\n", arrayCharLine);
        }
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