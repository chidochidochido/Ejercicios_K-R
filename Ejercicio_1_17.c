/*
Ejercicio 1.17
Escriba un programa que imprima todas las líneas de entrada 
que sean mayores de 80 caracteres
*/

#include <stdio.h>

#define MAXLINE ((unsigned int)1000)  /* tamaño máximo de la línea de entrada */
#define MIN_NUM_CHAR_TO_PRINT  ((unsigned int)10)  

int intGetline(char [], int);

/* imprime la línea de entrada más larga */
main()
{
    /*VARIABLE DECLARATIONS*/
    int intLength;                /* longitud actual de la línea */
    char arrayCharLine[MAXLINE];       /* línea de entrada actual */


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