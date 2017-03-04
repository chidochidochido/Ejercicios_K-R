/*
Ejercicio 1-6
Verifique que la expresión getchar() != EOF es 0 o 1
*/

#include <stdio.h>

main()
{
    int c = 0;
    
    while(c != EOF) 
    {
        c = getchar();
        printf("%d\n", c);
    }
}